// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/ObstacleCommon.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.hpp"
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

void ObstacleCommon_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::ObstacleCommon(_init);
}

void ObstacleCommon_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::ObstacleCommon *>(message_memory);
  typed_message->~ObstacleCommon();
}

size_t size_function__ObstacleCommon__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObstacleCommon__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__ObstacleCommon__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObstacleCommon__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__ObstacleCommon__points(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__ObstacleCommon__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__ObstacleCommon__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__ObstacleCommon__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ObstacleCommon__associated_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::AssociatedInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObstacleCommon__associated_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::AssociatedInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ObstacleCommon__associated_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::AssociatedInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObstacleCommon__associated_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::AssociatedInfo *>(
    get_const_function__ObstacleCommon__associated_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::AssociatedInfo *>(untyped_value);
  value = item;
}

void assign_function__ObstacleCommon__associated_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::AssociatedInfo *>(
    get_function__ObstacleCommon__associated_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::AssociatedInfo *>(untyped_value);
  item = value;
}

void resize_function__ObstacleCommon__associated_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::AssociatedInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ObstacleCommon__extra_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::ExtraInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObstacleCommon__extra_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::ExtraInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ObstacleCommon__extra_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::ExtraInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObstacleCommon__extra_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::ExtraInfo *>(
    get_const_function__ObstacleCommon__extra_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::ExtraInfo *>(untyped_value);
  value = item;
}

void assign_function__ObstacleCommon__extra_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::ExtraInfo *>(
    get_function__ObstacleCommon__extra_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::ExtraInfo *>(untyped_value);
  item = value;
}

void resize_function__ObstacleCommon__extra_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::ExtraInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ObstacleCommon__pixel_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObstacleCommon__pixel_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void * get_function__ObstacleCommon__pixel_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObstacleCommon__pixel_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(
    get_const_function__ObstacleCommon__pixel_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(untyped_value);
  value = item;
}

void assign_function__ObstacleCommon__pixel_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(
    get_function__ObstacleCommon__pixel_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(untyped_value);
  item = value;
}

void resize_function__ObstacleCommon__pixel_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObstacleCommon_message_member_array[15] = {
  {
    "obs_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, obs_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObstacleCommon__points,  // size() function pointer
    get_const_function__ObstacleCommon__points,  // get_const(index) function pointer
    get_function__ObstacleCommon__points,  // get(index) function pointer
    fetch_function__ObstacleCommon__points,  // fetch(index, &value) function pointer
    assign_function__ObstacleCommon__points,  // assign(index, value) function pointer
    resize_function__ObstacleCommon__points  // resize(index) function pointer
  },
  {
    "obs_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, obs_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dims",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, dims),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_localization_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "track_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, track_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracking_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, tracking_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::BoundingBox>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, bounding_box),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "miss_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, miss_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_stable_tracked",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, is_stable_tracked),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "in_parking_slot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, in_parking_slot),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "associated_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::AssociatedInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, associated_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObstacleCommon__associated_infos,  // size() function pointer
    get_const_function__ObstacleCommon__associated_infos,  // get_const(index) function pointer
    get_function__ObstacleCommon__associated_infos,  // get(index) function pointer
    fetch_function__ObstacleCommon__associated_infos,  // fetch(index, &value) function pointer
    assign_function__ObstacleCommon__associated_infos,  // assign(index, value) function pointer
    resize_function__ObstacleCommon__associated_infos  // resize(index) function pointer
  },
  {
    "extra_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::ExtraInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, extra_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObstacleCommon__extra_infos,  // size() function pointer
    get_const_function__ObstacleCommon__extra_infos,  // get_const(index) function pointer
    get_function__ObstacleCommon__extra_infos,  // get(index) function pointer
    fetch_function__ObstacleCommon__extra_infos,  // fetch(index, &value) function pointer
    assign_function__ObstacleCommon__extra_infos,  // assign(index, value) function pointer
    resize_function__ObstacleCommon__extra_infos  // resize(index) function pointer
  },
  {
    "pixel_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Point2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ObstacleCommon, pixel_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObstacleCommon__pixel_points,  // size() function pointer
    get_const_function__ObstacleCommon__pixel_points,  // get_const(index) function pointer
    get_function__ObstacleCommon__pixel_points,  // get(index) function pointer
    fetch_function__ObstacleCommon__pixel_points,  // fetch(index, &value) function pointer
    assign_function__ObstacleCommon__pixel_points,  // assign(index, value) function pointer
    resize_function__ObstacleCommon__pixel_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObstacleCommon_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "ObstacleCommon",  // message name
  15,  // number of fields
  sizeof(deva_perception_msgs::msg::ObstacleCommon),
  ObstacleCommon_message_member_array,  // message members
  ObstacleCommon_init_function,  // function to initialize message memory (memory has to be allocated)
  ObstacleCommon_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObstacleCommon_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObstacleCommon_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::ObstacleCommon>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleCommon_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, ObstacleCommon)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleCommon_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

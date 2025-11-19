// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/Area.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/area__struct.hpp"
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

void Area_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::Area(_init);
}

void Area_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::Area *>(message_memory);
  typed_message->~Area();
}

size_t size_function__Area__line_segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::EdgeLineSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Area__line_segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::EdgeLineSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__Area__line_segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::EdgeLineSegment> *>(untyped_member);
  return &member[index];
}

void fetch_function__Area__line_segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::EdgeLineSegment *>(
    get_const_function__Area__line_segments(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::EdgeLineSegment *>(untyped_value);
  value = item;
}

void assign_function__Area__line_segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::EdgeLineSegment *>(
    get_function__Area__line_segments(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::EdgeLineSegment *>(untyped_value);
  item = value;
}

void resize_function__Area__line_segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::EdgeLineSegment> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Area__equation_curves(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::EdgeEquationCurve> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Area__equation_curves(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::EdgeEquationCurve> *>(untyped_member);
  return &member[index];
}

void * get_function__Area__equation_curves(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::EdgeEquationCurve> *>(untyped_member);
  return &member[index];
}

void fetch_function__Area__equation_curves(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::EdgeEquationCurve *>(
    get_const_function__Area__equation_curves(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::EdgeEquationCurve *>(untyped_value);
  value = item;
}

void assign_function__Area__equation_curves(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::EdgeEquationCurve *>(
    get_function__Area__equation_curves(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::EdgeEquationCurve *>(untyped_value);
  item = value;
}

void resize_function__Area__equation_curves(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::EdgeEquationCurve> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Area__disperse_curves(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::EdgeDisperseCurve> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Area__disperse_curves(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::EdgeDisperseCurve> *>(untyped_member);
  return &member[index];
}

void * get_function__Area__disperse_curves(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::EdgeDisperseCurve> *>(untyped_member);
  return &member[index];
}

void fetch_function__Area__disperse_curves(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::EdgeDisperseCurve *>(
    get_const_function__Area__disperse_curves(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::EdgeDisperseCurve *>(untyped_value);
  value = item;
}

void assign_function__Area__disperse_curves(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::EdgeDisperseCurve *>(
    get_function__Area__disperse_curves(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::EdgeDisperseCurve *>(untyped_value);
  item = value;
}

void resize_function__Area__disperse_curves(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::EdgeDisperseCurve> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Area__corner_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Area__corner_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__Area__corner_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__Area__corner_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__Area__corner_points(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__Area__corner_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__Area__corner_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__Area__corner_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Area__static_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Area__static_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__Area__static_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__Area__static_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::StaticObstacle *>(
    get_const_function__Area__static_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::StaticObstacle *>(untyped_value);
  value = item;
}

void assign_function__Area__static_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::StaticObstacle *>(
    get_function__Area__static_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::StaticObstacle *>(untyped_value);
  item = value;
}

void resize_function__Area__static_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Area__pixel_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Area__pixel_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void * get_function__Area__pixel_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__Area__pixel_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(
    get_const_function__Area__pixel_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(untyped_value);
  value = item;
}

void assign_function__Area__pixel_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(
    get_function__Area__pixel_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(untyped_value);
  item = value;
}

void resize_function__Area__pixel_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Area_message_member_array[17] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, type),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::Area, dims),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::Area, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "segment_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, segment_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "line_segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::EdgeLineSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, line_segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__Area__line_segments,  // size() function pointer
    get_const_function__Area__line_segments,  // get_const(index) function pointer
    get_function__Area__line_segments,  // get(index) function pointer
    fetch_function__Area__line_segments,  // fetch(index, &value) function pointer
    assign_function__Area__line_segments,  // assign(index, value) function pointer
    resize_function__Area__line_segments  // resize(index) function pointer
  },
  {
    "equation_curves",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::EdgeEquationCurve>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, equation_curves),  // bytes offset in struct
    nullptr,  // default value
    size_function__Area__equation_curves,  // size() function pointer
    get_const_function__Area__equation_curves,  // get_const(index) function pointer
    get_function__Area__equation_curves,  // get(index) function pointer
    fetch_function__Area__equation_curves,  // fetch(index, &value) function pointer
    assign_function__Area__equation_curves,  // assign(index, value) function pointer
    resize_function__Area__equation_curves  // resize(index) function pointer
  },
  {
    "disperse_curves",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::EdgeDisperseCurve>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, disperse_curves),  // bytes offset in struct
    nullptr,  // default value
    size_function__Area__disperse_curves,  // size() function pointer
    get_const_function__Area__disperse_curves,  // get_const(index) function pointer
    get_function__Area__disperse_curves,  // get(index) function pointer
    fetch_function__Area__disperse_curves,  // fetch(index, &value) function pointer
    assign_function__Area__disperse_curves,  // assign(index, value) function pointer
    resize_function__Area__disperse_curves  // resize(index) function pointer
  },
  {
    "corner_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, corner_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Area__corner_points,  // size() function pointer
    get_const_function__Area__corner_points,  // get_const(index) function pointer
    get_function__Area__corner_points,  // get(index) function pointer
    fetch_function__Area__corner_points,  // fetch(index, &value) function pointer
    assign_function__Area__corner_points,  // assign(index, value) function pointer
    resize_function__Area__corner_points  // resize(index) function pointer
  },
  {
    "direction_pixcoord",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Point2d>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, direction_pixcoord),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "depth_carcoord",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, depth_carcoord),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_occupied",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, is_occupied),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::Area, is_stable_tracked),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "occupied_confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, occupied_confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "static_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::StaticObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, static_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__Area__static_obstacles,  // size() function pointer
    get_const_function__Area__static_obstacles,  // get_const(index) function pointer
    get_function__Area__static_obstacles,  // get(index) function pointer
    fetch_function__Area__static_obstacles,  // fetch(index, &value) function pointer
    assign_function__Area__static_obstacles,  // assign(index, value) function pointer
    resize_function__Area__static_obstacles  // resize(index) function pointer
  },
  {
    "pixel_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Point2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::Area, pixel_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Area__pixel_points,  // size() function pointer
    get_const_function__Area__pixel_points,  // get_const(index) function pointer
    get_function__Area__pixel_points,  // get(index) function pointer
    fetch_function__Area__pixel_points,  // fetch(index, &value) function pointer
    assign_function__Area__pixel_points,  // assign(index, value) function pointer
    resize_function__Area__pixel_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Area_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "Area",  // message name
  17,  // number of fields
  sizeof(deva_perception_msgs::msg::Area),
  Area_message_member_array,  // message members
  Area_init_function,  // function to initialize message memory (memory has to be allocated)
  Area_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Area_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Area_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::Area>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::Area_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, Area)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::Area_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

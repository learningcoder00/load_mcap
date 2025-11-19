// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/route__struct.hpp"
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

void Route_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::Route(_init);
}

void Route_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::Route *>(message_memory);
  typed_message->~Route();
}

size_t size_function__Route__route_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Route__route_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return &member[index];
}

void * get_function__Route__route_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return &member[index];
}

void fetch_function__Route__route_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Coordinate *>(
    get_const_function__Route__route_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Coordinate *>(untyped_value);
  value = item;
}

void assign_function__Route__route_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Coordinate *>(
    get_function__Route__route_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Coordinate *>(untyped_value);
  item = value;
}

void resize_function__Route__route_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Route__rg_intersection_result(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGIntersectionResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Route__rg_intersection_result(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGIntersectionResult> *>(untyped_member);
  return &member[index];
}

void * get_function__Route__rg_intersection_result(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGIntersectionResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__Route__rg_intersection_result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGIntersectionResult *>(
    get_const_function__Route__rg_intersection_result(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGIntersectionResult *>(untyped_value);
  value = item;
}

void assign_function__Route__rg_intersection_result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGIntersectionResult *>(
    get_function__Route__rg_intersection_result(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGIntersectionResult *>(untyped_value);
  item = value;
}

void resize_function__Route__rg_intersection_result(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGIntersectionResult> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Route__rg_lane_info_result(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGLaneInfoResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Route__rg_lane_info_result(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGLaneInfoResult> *>(untyped_member);
  return &member[index];
}

void * get_function__Route__rg_lane_info_result(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGLaneInfoResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__Route__rg_lane_info_result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGLaneInfoResult *>(
    get_const_function__Route__rg_lane_info_result(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGLaneInfoResult *>(untyped_value);
  value = item;
}

void assign_function__Route__rg_lane_info_result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGLaneInfoResult *>(
    get_function__Route__rg_lane_info_result(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGLaneInfoResult *>(untyped_value);
  item = value;
}

void resize_function__Route__rg_lane_info_result(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGLaneInfoResult> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Route__rg_red_light_result(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGRedLightResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Route__rg_red_light_result(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGRedLightResult> *>(untyped_member);
  return &member[index];
}

void * get_function__Route__rg_red_light_result(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGRedLightResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__Route__rg_red_light_result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGRedLightResult *>(
    get_const_function__Route__rg_red_light_result(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGRedLightResult *>(untyped_value);
  value = item;
}

void assign_function__Route__rg_red_light_result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGRedLightResult *>(
    get_function__Route__rg_red_light_result(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGRedLightResult *>(untyped_value);
  item = value;
}

void resize_function__Route__rg_red_light_result(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGRedLightResult> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Route__rg_tips_result(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGVTipsPointResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Route__rg_tips_result(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGVTipsPointResult> *>(untyped_member);
  return &member[index];
}

void * get_function__Route__rg_tips_result(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGVTipsPointResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__Route__rg_tips_result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGVTipsPointResult *>(
    get_const_function__Route__rg_tips_result(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGVTipsPointResult *>(untyped_value);
  value = item;
}

void assign_function__Route__rg_tips_result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGVTipsPointResult *>(
    get_function__Route__rg_tips_result(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGVTipsPointResult *>(untyped_value);
  item = value;
}

void resize_function__Route__rg_tips_result(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGVTipsPointResult> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Route_message_member_array[5] = {
  {
    "route_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Coordinate>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Route, route_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Route__route_points,  // size() function pointer
    get_const_function__Route__route_points,  // get_const(index) function pointer
    get_function__Route__route_points,  // get(index) function pointer
    fetch_function__Route__route_points,  // fetch(index, &value) function pointer
    assign_function__Route__route_points,  // assign(index, value) function pointer
    resize_function__Route__route_points  // resize(index) function pointer
  },
  {
    "rg_intersection_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::RGIntersectionResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Route, rg_intersection_result),  // bytes offset in struct
    nullptr,  // default value
    size_function__Route__rg_intersection_result,  // size() function pointer
    get_const_function__Route__rg_intersection_result,  // get_const(index) function pointer
    get_function__Route__rg_intersection_result,  // get(index) function pointer
    fetch_function__Route__rg_intersection_result,  // fetch(index, &value) function pointer
    assign_function__Route__rg_intersection_result,  // assign(index, value) function pointer
    resize_function__Route__rg_intersection_result  // resize(index) function pointer
  },
  {
    "rg_lane_info_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::RGLaneInfoResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Route, rg_lane_info_result),  // bytes offset in struct
    nullptr,  // default value
    size_function__Route__rg_lane_info_result,  // size() function pointer
    get_const_function__Route__rg_lane_info_result,  // get_const(index) function pointer
    get_function__Route__rg_lane_info_result,  // get(index) function pointer
    fetch_function__Route__rg_lane_info_result,  // fetch(index, &value) function pointer
    assign_function__Route__rg_lane_info_result,  // assign(index, value) function pointer
    resize_function__Route__rg_lane_info_result  // resize(index) function pointer
  },
  {
    "rg_red_light_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::RGRedLightResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Route, rg_red_light_result),  // bytes offset in struct
    nullptr,  // default value
    size_function__Route__rg_red_light_result,  // size() function pointer
    get_const_function__Route__rg_red_light_result,  // get_const(index) function pointer
    get_function__Route__rg_red_light_result,  // get(index) function pointer
    fetch_function__Route__rg_red_light_result,  // fetch(index, &value) function pointer
    assign_function__Route__rg_red_light_result,  // assign(index, value) function pointer
    resize_function__Route__rg_red_light_result  // resize(index) function pointer
  },
  {
    "rg_tips_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::RGVTipsPointResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Route, rg_tips_result),  // bytes offset in struct
    nullptr,  // default value
    size_function__Route__rg_tips_result,  // size() function pointer
    get_const_function__Route__rg_tips_result,  // get_const(index) function pointer
    get_function__Route__rg_tips_result,  // get(index) function pointer
    fetch_function__Route__rg_tips_result,  // fetch(index, &value) function pointer
    assign_function__Route__rg_tips_result,  // assign(index, value) function pointer
    resize_function__Route__rg_tips_result  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Route_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "Route",  // message name
  5,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::Route),
  Route_message_member_array,  // message members
  Route_init_function,  // function to initialize message memory (memory has to be allocated)
  Route_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Route_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Route_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::Route>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::Route_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, Route)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::Route_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

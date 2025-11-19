// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/WayLink.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/way_link__struct.hpp"
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

void WayLink_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::WayLink(_init);
}

void WayLink_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::WayLink *>(message_memory);
  typed_message->~WayLink();
}

size_t size_function__WayLink__car_coord_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WayLink__car_coord_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__WayLink__car_coord_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__WayLink__car_coord_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__WayLink__car_coord_points(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__WayLink__car_coord_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__WayLink__car_coord_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__WayLink__car_coord_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WayLink__corner_points_idx(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WayLink__corner_points_idx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__WayLink__corner_points_idx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__WayLink__corner_points_idx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__WayLink__corner_points_idx(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__WayLink__corner_points_idx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__WayLink__corner_points_idx(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__WayLink__corner_points_idx(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WayLink__point_confidences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WayLink__point_confidences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__WayLink__point_confidences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__WayLink__point_confidences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WayLink__point_confidences(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WayLink__point_confidences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WayLink__point_confidences(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__WayLink__point_confidences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WayLink__corner_confidences(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WayLink__corner_confidences(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__WayLink__corner_confidences(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__WayLink__corner_confidences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WayLink__corner_confidences(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WayLink__corner_confidences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WayLink__corner_confidences(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__WayLink__corner_confidences(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WayLink__pixel_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WayLink__pixel_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void * get_function__WayLink__pixel_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__WayLink__pixel_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(
    get_const_function__WayLink__pixel_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(untyped_value);
  value = item;
}

void assign_function__WayLink__pixel_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(
    get_function__WayLink__pixel_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(untyped_value);
  item = value;
}

void resize_function__WayLink__pixel_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WayLink_message_member_array[5] = {
  {
    "car_coord_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::WayLink, car_coord_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__WayLink__car_coord_points,  // size() function pointer
    get_const_function__WayLink__car_coord_points,  // get_const(index) function pointer
    get_function__WayLink__car_coord_points,  // get(index) function pointer
    fetch_function__WayLink__car_coord_points,  // fetch(index, &value) function pointer
    assign_function__WayLink__car_coord_points,  // assign(index, value) function pointer
    resize_function__WayLink__car_coord_points  // resize(index) function pointer
  },
  {
    "corner_points_idx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::WayLink, corner_points_idx),  // bytes offset in struct
    nullptr,  // default value
    size_function__WayLink__corner_points_idx,  // size() function pointer
    get_const_function__WayLink__corner_points_idx,  // get_const(index) function pointer
    get_function__WayLink__corner_points_idx,  // get(index) function pointer
    fetch_function__WayLink__corner_points_idx,  // fetch(index, &value) function pointer
    assign_function__WayLink__corner_points_idx,  // assign(index, value) function pointer
    resize_function__WayLink__corner_points_idx  // resize(index) function pointer
  },
  {
    "point_confidences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::WayLink, point_confidences),  // bytes offset in struct
    nullptr,  // default value
    size_function__WayLink__point_confidences,  // size() function pointer
    get_const_function__WayLink__point_confidences,  // get_const(index) function pointer
    get_function__WayLink__point_confidences,  // get(index) function pointer
    fetch_function__WayLink__point_confidences,  // fetch(index, &value) function pointer
    assign_function__WayLink__point_confidences,  // assign(index, value) function pointer
    resize_function__WayLink__point_confidences  // resize(index) function pointer
  },
  {
    "corner_confidences",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::WayLink, corner_confidences),  // bytes offset in struct
    nullptr,  // default value
    size_function__WayLink__corner_confidences,  // size() function pointer
    get_const_function__WayLink__corner_confidences,  // get_const(index) function pointer
    get_function__WayLink__corner_confidences,  // get(index) function pointer
    fetch_function__WayLink__corner_confidences,  // fetch(index, &value) function pointer
    assign_function__WayLink__corner_confidences,  // assign(index, value) function pointer
    resize_function__WayLink__corner_confidences  // resize(index) function pointer
  },
  {
    "pixel_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Point2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::WayLink, pixel_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__WayLink__pixel_points,  // size() function pointer
    get_const_function__WayLink__pixel_points,  // get_const(index) function pointer
    get_function__WayLink__pixel_points,  // get(index) function pointer
    fetch_function__WayLink__pixel_points,  // fetch(index, &value) function pointer
    assign_function__WayLink__pixel_points,  // assign(index, value) function pointer
    resize_function__WayLink__pixel_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WayLink_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "WayLink",  // message name
  5,  // number of fields
  sizeof(deva_perception_msgs::msg::WayLink),
  WayLink_message_member_array,  // message members
  WayLink_init_function,  // function to initialize message memory (memory has to be allocated)
  WayLink_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WayLink_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WayLink_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::WayLink>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::WayLink_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, WayLink)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::WayLink_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

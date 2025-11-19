// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/perception_result__struct.hpp"
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

void PerceptionResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::PerceptionResult(_init);
}

void PerceptionResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::PerceptionResult *>(message_memory);
  typed_message->~PerceptionResult();
}

size_t size_function__PerceptionResult__st_boundaries(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::STBoundary> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__st_boundaries(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::STBoundary> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__st_boundaries(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::STBoundary> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__st_boundaries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::STBoundary *>(
    get_const_function__PerceptionResult__st_boundaries(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::STBoundary *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__st_boundaries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::STBoundary *>(
    get_function__PerceptionResult__st_boundaries(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::STBoundary *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__st_boundaries(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::STBoundary> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__ust_boundaries(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::USTBoundary> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__ust_boundaries(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::USTBoundary> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__ust_boundaries(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::USTBoundary> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__ust_boundaries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::USTBoundary *>(
    get_const_function__PerceptionResult__ust_boundaries(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::USTBoundary *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__ust_boundaries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::USTBoundary *>(
    get_function__PerceptionResult__ust_boundaries(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::USTBoundary *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__ust_boundaries(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::USTBoundary> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__crosswalks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::Crosswalk> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__crosswalks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::Crosswalk> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__crosswalks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::Crosswalk> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__crosswalks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::Crosswalk *>(
    get_const_function__PerceptionResult__crosswalks(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::Crosswalk *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__crosswalks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::Crosswalk *>(
    get_function__PerceptionResult__crosswalks(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::Crosswalk *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__crosswalks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::Crosswalk> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__steering_arrows(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::SteeringArrow> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__steering_arrows(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::SteeringArrow> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__steering_arrows(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::SteeringArrow> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__steering_arrows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::SteeringArrow *>(
    get_const_function__PerceptionResult__steering_arrows(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::SteeringArrow *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__steering_arrows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::SteeringArrow *>(
    get_function__PerceptionResult__steering_arrows(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::SteeringArrow *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__steering_arrows(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::SteeringArrow> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__noparking_zones(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::NoparkingZone> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__noparking_zones(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::NoparkingZone> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__noparking_zones(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::NoparkingZone> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__noparking_zones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::NoparkingZone *>(
    get_const_function__PerceptionResult__noparking_zones(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::NoparkingZone *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__noparking_zones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::NoparkingZone *>(
    get_function__PerceptionResult__noparking_zones(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::NoparkingZone *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__noparking_zones(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::NoparkingZone> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__areas(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::Area> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__areas(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::Area> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__areas(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::Area> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__areas(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::Area *>(
    get_const_function__PerceptionResult__areas(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::Area *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__areas(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::Area *>(
    get_function__PerceptionResult__areas(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::Area *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__areas(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::Area> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__moving_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::MovingObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__moving_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::MovingObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__moving_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::MovingObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__moving_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::MovingObstacle *>(
    get_const_function__PerceptionResult__moving_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::MovingObstacle *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__moving_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::MovingObstacle *>(
    get_function__PerceptionResult__moving_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::MovingObstacle *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__moving_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::MovingObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__general_static_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__general_static_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__general_static_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__general_static_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::StaticObstacle *>(
    get_const_function__PerceptionResult__general_static_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::StaticObstacle *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__general_static_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::StaticObstacle *>(
    get_function__PerceptionResult__general_static_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::StaticObstacle *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__general_static_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::StaticObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__traffic_light_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::TrafficLight> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__traffic_light_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::TrafficLight> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__traffic_light_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::TrafficLight> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__traffic_light_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::TrafficLight *>(
    get_const_function__PerceptionResult__traffic_light_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::TrafficLight *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__traffic_light_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::TrafficLight *>(
    get_function__PerceptionResult__traffic_light_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::TrafficLight *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__traffic_light_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::TrafficLight> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__mutable_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::MutableObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__mutable_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::MutableObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__mutable_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::MutableObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__mutable_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::MutableObstacle *>(
    get_const_function__PerceptionResult__mutable_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::MutableObstacle *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__mutable_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::MutableObstacle *>(
    get_function__PerceptionResult__mutable_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::MutableObstacle *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__mutable_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::MutableObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__center_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::CenterLine> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__center_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::CenterLine> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__center_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::CenterLine> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__center_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::CenterLine *>(
    get_const_function__PerceptionResult__center_lines(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::CenterLine *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__center_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::CenterLine *>(
    get_function__PerceptionResult__center_lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::CenterLine *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__center_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::CenterLine> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PerceptionResult__fork_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::ForkPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PerceptionResult__fork_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::ForkPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__PerceptionResult__fork_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::ForkPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__PerceptionResult__fork_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::ForkPoint *>(
    get_const_function__PerceptionResult__fork_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::ForkPoint *>(untyped_value);
  value = item;
}

void assign_function__PerceptionResult__fork_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::ForkPoint *>(
    get_function__PerceptionResult__fork_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::ForkPoint *>(untyped_value);
  item = value;
}

void resize_function__PerceptionResult__fork_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::ForkPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PerceptionResult_message_member_array[15] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "translation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, translation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "st_boundaries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::STBoundary>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, st_boundaries),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__st_boundaries,  // size() function pointer
    get_const_function__PerceptionResult__st_boundaries,  // get_const(index) function pointer
    get_function__PerceptionResult__st_boundaries,  // get(index) function pointer
    fetch_function__PerceptionResult__st_boundaries,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__st_boundaries,  // assign(index, value) function pointer
    resize_function__PerceptionResult__st_boundaries  // resize(index) function pointer
  },
  {
    "ust_boundaries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::USTBoundary>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, ust_boundaries),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__ust_boundaries,  // size() function pointer
    get_const_function__PerceptionResult__ust_boundaries,  // get_const(index) function pointer
    get_function__PerceptionResult__ust_boundaries,  // get(index) function pointer
    fetch_function__PerceptionResult__ust_boundaries,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__ust_boundaries,  // assign(index, value) function pointer
    resize_function__PerceptionResult__ust_boundaries  // resize(index) function pointer
  },
  {
    "crosswalks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::Crosswalk>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, crosswalks),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__crosswalks,  // size() function pointer
    get_const_function__PerceptionResult__crosswalks,  // get_const(index) function pointer
    get_function__PerceptionResult__crosswalks,  // get(index) function pointer
    fetch_function__PerceptionResult__crosswalks,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__crosswalks,  // assign(index, value) function pointer
    resize_function__PerceptionResult__crosswalks  // resize(index) function pointer
  },
  {
    "steering_arrows",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::SteeringArrow>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, steering_arrows),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__steering_arrows,  // size() function pointer
    get_const_function__PerceptionResult__steering_arrows,  // get_const(index) function pointer
    get_function__PerceptionResult__steering_arrows,  // get(index) function pointer
    fetch_function__PerceptionResult__steering_arrows,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__steering_arrows,  // assign(index, value) function pointer
    resize_function__PerceptionResult__steering_arrows  // resize(index) function pointer
  },
  {
    "noparking_zones",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::NoparkingZone>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, noparking_zones),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__noparking_zones,  // size() function pointer
    get_const_function__PerceptionResult__noparking_zones,  // get_const(index) function pointer
    get_function__PerceptionResult__noparking_zones,  // get(index) function pointer
    fetch_function__PerceptionResult__noparking_zones,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__noparking_zones,  // assign(index, value) function pointer
    resize_function__PerceptionResult__noparking_zones  // resize(index) function pointer
  },
  {
    "areas",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::Area>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, areas),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__areas,  // size() function pointer
    get_const_function__PerceptionResult__areas,  // get_const(index) function pointer
    get_function__PerceptionResult__areas,  // get(index) function pointer
    fetch_function__PerceptionResult__areas,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__areas,  // assign(index, value) function pointer
    resize_function__PerceptionResult__areas  // resize(index) function pointer
  },
  {
    "moving_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::MovingObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, moving_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__moving_obstacles,  // size() function pointer
    get_const_function__PerceptionResult__moving_obstacles,  // get_const(index) function pointer
    get_function__PerceptionResult__moving_obstacles,  // get(index) function pointer
    fetch_function__PerceptionResult__moving_obstacles,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__moving_obstacles,  // assign(index, value) function pointer
    resize_function__PerceptionResult__moving_obstacles  // resize(index) function pointer
  },
  {
    "general_static_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::StaticObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, general_static_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__general_static_obstacles,  // size() function pointer
    get_const_function__PerceptionResult__general_static_obstacles,  // get_const(index) function pointer
    get_function__PerceptionResult__general_static_obstacles,  // get(index) function pointer
    fetch_function__PerceptionResult__general_static_obstacles,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__general_static_obstacles,  // assign(index, value) function pointer
    resize_function__PerceptionResult__general_static_obstacles  // resize(index) function pointer
  },
  {
    "traffic_light_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::TrafficLight>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, traffic_light_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__traffic_light_obstacles,  // size() function pointer
    get_const_function__PerceptionResult__traffic_light_obstacles,  // get_const(index) function pointer
    get_function__PerceptionResult__traffic_light_obstacles,  // get(index) function pointer
    fetch_function__PerceptionResult__traffic_light_obstacles,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__traffic_light_obstacles,  // assign(index, value) function pointer
    resize_function__PerceptionResult__traffic_light_obstacles  // resize(index) function pointer
  },
  {
    "mutable_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::MutableObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, mutable_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__mutable_obstacles,  // size() function pointer
    get_const_function__PerceptionResult__mutable_obstacles,  // get_const(index) function pointer
    get_function__PerceptionResult__mutable_obstacles,  // get(index) function pointer
    fetch_function__PerceptionResult__mutable_obstacles,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__mutable_obstacles,  // assign(index, value) function pointer
    resize_function__PerceptionResult__mutable_obstacles  // resize(index) function pointer
  },
  {
    "center_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::CenterLine>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, center_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__center_lines,  // size() function pointer
    get_const_function__PerceptionResult__center_lines,  // get_const(index) function pointer
    get_function__PerceptionResult__center_lines,  // get(index) function pointer
    fetch_function__PerceptionResult__center_lines,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__center_lines,  // assign(index, value) function pointer
    resize_function__PerceptionResult__center_lines  // resize(index) function pointer
  },
  {
    "fork_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::ForkPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::PerceptionResult, fork_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__PerceptionResult__fork_points,  // size() function pointer
    get_const_function__PerceptionResult__fork_points,  // get_const(index) function pointer
    get_function__PerceptionResult__fork_points,  // get(index) function pointer
    fetch_function__PerceptionResult__fork_points,  // fetch(index, &value) function pointer
    assign_function__PerceptionResult__fork_points,  // assign(index, value) function pointer
    resize_function__PerceptionResult__fork_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PerceptionResult_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "PerceptionResult",  // message name
  15,  // number of fields
  sizeof(deva_perception_msgs::msg::PerceptionResult),
  PerceptionResult_message_member_array,  // message members
  PerceptionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  PerceptionResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PerceptionResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PerceptionResult_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::PerceptionResult>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::PerceptionResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, PerceptionResult)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::PerceptionResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

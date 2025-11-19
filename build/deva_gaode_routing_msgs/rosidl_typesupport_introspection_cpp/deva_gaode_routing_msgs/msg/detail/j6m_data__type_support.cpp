// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/J6mData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__struct.hpp"
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

void J6mData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::J6mData(_init);
}

void J6mData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::J6mData *>(message_memory);
  typed_message->~J6mData();
}

size_t size_function__J6mData__j6m_links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mLink> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mData__j6m_links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mLink> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mData__j6m_links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mLink> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mData__j6m_links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mLink *>(
    get_const_function__J6mData__j6m_links(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mLink *>(untyped_value);
  value = item;
}

void assign_function__J6mData__j6m_links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mLink *>(
    get_function__J6mData__j6m_links(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mLink *>(untyped_value);
  item = value;
}

void resize_function__J6mData__j6m_links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mLink> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mData__j6m_intersections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mIntersection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mData__j6m_intersections(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mIntersection> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mData__j6m_intersections(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mIntersection> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mData__j6m_intersections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mIntersection *>(
    get_const_function__J6mData__j6m_intersections(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mIntersection *>(untyped_value);
  value = item;
}

void assign_function__J6mData__j6m_intersections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mIntersection *>(
    get_function__J6mData__j6m_intersections(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mIntersection *>(untyped_value);
  item = value;
}

void resize_function__J6mData__j6m_intersections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mIntersection> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mData__j6m_lanes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mLane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mData__j6m_lanes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mLane> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mData__j6m_lanes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mLane> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mData__j6m_lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mLane *>(
    get_const_function__J6mData__j6m_lanes(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mLane *>(untyped_value);
  value = item;
}

void assign_function__J6mData__j6m_lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mLane *>(
    get_function__J6mData__j6m_lanes(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mLane *>(untyped_value);
  item = value;
}

void resize_function__J6mData__j6m_lanes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mLane> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mData__j6m_lane_markings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mLaneMarking> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mData__j6m_lane_markings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mLaneMarking> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mData__j6m_lane_markings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mLaneMarking> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mData__j6m_lane_markings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mLaneMarking *>(
    get_const_function__J6mData__j6m_lane_markings(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mLaneMarking *>(untyped_value);
  value = item;
}

void assign_function__J6mData__j6m_lane_markings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mLaneMarking *>(
    get_function__J6mData__j6m_lane_markings(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mLaneMarking *>(untyped_value);
  item = value;
}

void resize_function__J6mData__j6m_lane_markings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mLaneMarking> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mData__j6m_road_objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mRoadObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mData__j6m_road_objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mRoadObject> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mData__j6m_road_objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mRoadObject> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mData__j6m_road_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mRoadObject *>(
    get_const_function__J6mData__j6m_road_objects(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mRoadObject *>(untyped_value);
  value = item;
}

void assign_function__J6mData__j6m_road_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mRoadObject *>(
    get_function__J6mData__j6m_road_objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mRoadObject *>(untyped_value);
  item = value;
}

void resize_function__J6mData__j6m_road_objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mRoadObject> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember J6mData_message_member_array[5] = {
  {
    "j6m_links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mLink>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mData, j6m_links),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mData__j6m_links,  // size() function pointer
    get_const_function__J6mData__j6m_links,  // get_const(index) function pointer
    get_function__J6mData__j6m_links,  // get(index) function pointer
    fetch_function__J6mData__j6m_links,  // fetch(index, &value) function pointer
    assign_function__J6mData__j6m_links,  // assign(index, value) function pointer
    resize_function__J6mData__j6m_links  // resize(index) function pointer
  },
  {
    "j6m_intersections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mIntersection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mData, j6m_intersections),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mData__j6m_intersections,  // size() function pointer
    get_const_function__J6mData__j6m_intersections,  // get_const(index) function pointer
    get_function__J6mData__j6m_intersections,  // get(index) function pointer
    fetch_function__J6mData__j6m_intersections,  // fetch(index, &value) function pointer
    assign_function__J6mData__j6m_intersections,  // assign(index, value) function pointer
    resize_function__J6mData__j6m_intersections  // resize(index) function pointer
  },
  {
    "j6m_lanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mLane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mData, j6m_lanes),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mData__j6m_lanes,  // size() function pointer
    get_const_function__J6mData__j6m_lanes,  // get_const(index) function pointer
    get_function__J6mData__j6m_lanes,  // get(index) function pointer
    fetch_function__J6mData__j6m_lanes,  // fetch(index, &value) function pointer
    assign_function__J6mData__j6m_lanes,  // assign(index, value) function pointer
    resize_function__J6mData__j6m_lanes  // resize(index) function pointer
  },
  {
    "j6m_lane_markings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mLaneMarking>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mData, j6m_lane_markings),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mData__j6m_lane_markings,  // size() function pointer
    get_const_function__J6mData__j6m_lane_markings,  // get_const(index) function pointer
    get_function__J6mData__j6m_lane_markings,  // get(index) function pointer
    fetch_function__J6mData__j6m_lane_markings,  // fetch(index, &value) function pointer
    assign_function__J6mData__j6m_lane_markings,  // assign(index, value) function pointer
    resize_function__J6mData__j6m_lane_markings  // resize(index) function pointer
  },
  {
    "j6m_road_objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mRoadObject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mData, j6m_road_objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mData__j6m_road_objects,  // size() function pointer
    get_const_function__J6mData__j6m_road_objects,  // get_const(index) function pointer
    get_function__J6mData__j6m_road_objects,  // get(index) function pointer
    fetch_function__J6mData__j6m_road_objects,  // fetch(index, &value) function pointer
    assign_function__J6mData__j6m_road_objects,  // assign(index, value) function pointer
    resize_function__J6mData__j6m_road_objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers J6mData_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "J6mData",  // message name
  5,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::J6mData),
  J6mData_message_member_array,  // message members
  J6mData_init_function,  // function to initialize message memory (memory has to be allocated)
  J6mData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t J6mData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &J6mData_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mData>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::J6mData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, J6mData)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::J6mData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

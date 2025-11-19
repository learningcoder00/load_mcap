// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/LanePropertySegment.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/lane_property_segment__struct.hpp"
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

void LanePropertySegment_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::LanePropertySegment(_init);
}

void LanePropertySegment_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::LanePropertySegment *>(message_memory);
  typed_message->~LanePropertySegment();
}

size_t size_function__LanePropertySegment__segment_properties(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LanePropertySegment__segment_properties(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LanePropertySegment__segment_properties(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LanePropertySegment__segment_properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LanePropertySegment__segment_properties(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LanePropertySegment__segment_properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LanePropertySegment__segment_properties(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__LanePropertySegment__segment_properties(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LanePropertySegment__segment_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LanePropertySegment__segment_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__LanePropertySegment__segment_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__LanePropertySegment__segment_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__LanePropertySegment__segment_points(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__LanePropertySegment__segment_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__LanePropertySegment__segment_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__LanePropertySegment__segment_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LanePropertySegment_message_member_array[3] = {
  {
    "num_segment",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LanePropertySegment, num_segment),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "segment_properties",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LanePropertySegment, segment_properties),  // bytes offset in struct
    nullptr,  // default value
    size_function__LanePropertySegment__segment_properties,  // size() function pointer
    get_const_function__LanePropertySegment__segment_properties,  // get_const(index) function pointer
    get_function__LanePropertySegment__segment_properties,  // get(index) function pointer
    fetch_function__LanePropertySegment__segment_properties,  // fetch(index, &value) function pointer
    assign_function__LanePropertySegment__segment_properties,  // assign(index, value) function pointer
    resize_function__LanePropertySegment__segment_properties  // resize(index) function pointer
  },
  {
    "segment_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::LanePropertySegment, segment_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__LanePropertySegment__segment_points,  // size() function pointer
    get_const_function__LanePropertySegment__segment_points,  // get_const(index) function pointer
    get_function__LanePropertySegment__segment_points,  // get(index) function pointer
    fetch_function__LanePropertySegment__segment_points,  // fetch(index, &value) function pointer
    assign_function__LanePropertySegment__segment_points,  // assign(index, value) function pointer
    resize_function__LanePropertySegment__segment_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LanePropertySegment_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "LanePropertySegment",  // message name
  3,  // number of fields
  sizeof(deva_perception_msgs::msg::LanePropertySegment),
  LanePropertySegment_message_member_array,  // message members
  LanePropertySegment_init_function,  // function to initialize message memory (memory has to be allocated)
  LanePropertySegment_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LanePropertySegment_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LanePropertySegment_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::LanePropertySegment>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::LanePropertySegment_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, LanePropertySegment)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::LanePropertySegment_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

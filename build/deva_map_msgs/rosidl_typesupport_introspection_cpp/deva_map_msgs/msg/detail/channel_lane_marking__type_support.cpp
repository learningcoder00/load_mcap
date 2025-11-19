// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/ChannelLaneMarking.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_map_msgs/msg/detail/channel_lane_marking__struct.hpp"
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

void ChannelLaneMarking_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_map_msgs::msg::ChannelLaneMarking(_init);
}

void ChannelLaneMarking_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_map_msgs::msg::ChannelLaneMarking *>(message_memory);
  typed_message->~ChannelLaneMarking();
}

size_t size_function__ChannelLaneMarking__marking_equation_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_common_msgs::msg::EquationCurve> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneMarking__marking_equation_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_common_msgs::msg::EquationCurve> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneMarking__marking_equation_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_common_msgs::msg::EquationCurve> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneMarking__marking_equation_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_common_msgs::msg::EquationCurve *>(
    get_const_function__ChannelLaneMarking__marking_equation_vec(untyped_member, index));
  auto & value = *reinterpret_cast<deva_common_msgs::msg::EquationCurve *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneMarking__marking_equation_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_common_msgs::msg::EquationCurve *>(
    get_function__ChannelLaneMarking__marking_equation_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_common_msgs::msg::EquationCurve *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneMarking__marking_equation_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_common_msgs::msg::EquationCurve> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ChannelLaneMarking__marking_type_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::ChannelMarkingType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneMarking__marking_type_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::ChannelMarkingType> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneMarking__marking_type_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::ChannelMarkingType> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneMarking__marking_type_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::ChannelMarkingType *>(
    get_const_function__ChannelLaneMarking__marking_type_vec(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::ChannelMarkingType *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneMarking__marking_type_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::ChannelMarkingType *>(
    get_function__ChannelLaneMarking__marking_type_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::ChannelMarkingType *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneMarking__marking_type_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::ChannelMarkingType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ChannelLaneMarking__marking_point_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneMarking__marking_point_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneMarking__marking_point_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneMarking__marking_point_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(
    get_const_function__ChannelLaneMarking__marking_point_vec(untyped_member, index));
  auto & value = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneMarking__marking_point_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(
    get_function__ChannelLaneMarking__marking_point_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneMarking__marking_point_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChannelLaneMarking_message_member_array[5] = {
  {
    "available",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneMarking, available),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "perception_lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneMarking, perception_lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "marking_equation_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::EquationCurve>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneMarking, marking_equation_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneMarking__marking_equation_vec,  // size() function pointer
    get_const_function__ChannelLaneMarking__marking_equation_vec,  // get_const(index) function pointer
    get_function__ChannelLaneMarking__marking_equation_vec,  // get(index) function pointer
    fetch_function__ChannelLaneMarking__marking_equation_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneMarking__marking_equation_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneMarking__marking_equation_vec  // resize(index) function pointer
  },
  {
    "marking_type_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::ChannelMarkingType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneMarking, marking_type_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneMarking__marking_type_vec,  // size() function pointer
    get_const_function__ChannelLaneMarking__marking_type_vec,  // get_const(index) function pointer
    get_function__ChannelLaneMarking__marking_type_vec,  // get(index) function pointer
    fetch_function__ChannelLaneMarking__marking_type_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneMarking__marking_type_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneMarking__marking_type_vec  // resize(index) function pointer
  },
  {
    "marking_point_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Point2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneMarking, marking_point_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneMarking__marking_point_vec,  // size() function pointer
    get_const_function__ChannelLaneMarking__marking_point_vec,  // get_const(index) function pointer
    get_function__ChannelLaneMarking__marking_point_vec,  // get(index) function pointer
    fetch_function__ChannelLaneMarking__marking_point_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneMarking__marking_point_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneMarking__marking_point_vec  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChannelLaneMarking_message_members = {
  "deva_map_msgs::msg",  // message namespace
  "ChannelLaneMarking",  // message name
  5,  // number of fields
  sizeof(deva_map_msgs::msg::ChannelLaneMarking),
  ChannelLaneMarking_message_member_array,  // message members
  ChannelLaneMarking_init_function,  // function to initialize message memory (memory has to be allocated)
  ChannelLaneMarking_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChannelLaneMarking_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChannelLaneMarking_message_members,
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
get_message_type_support_handle<deva_map_msgs::msg::ChannelLaneMarking>()
{
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelLaneMarking_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_map_msgs, msg, ChannelLaneMarking)() {
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelLaneMarking_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

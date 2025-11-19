// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/RvLaneResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/rv_lane_result__struct.hpp"
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

void RvLaneResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::RvLaneResult(_init);
}

void RvLaneResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::RvLaneResult *>(message_memory);
  typed_message->~RvLaneResult();
}

size_t size_function__RvLaneResult__laneline_2d_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::LaneLine2dArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RvLaneResult__laneline_2d_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::LaneLine2dArray> *>(untyped_member);
  return &member[index];
}

void * get_function__RvLaneResult__laneline_2d_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::LaneLine2dArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__RvLaneResult__laneline_2d_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::LaneLine2dArray *>(
    get_const_function__RvLaneResult__laneline_2d_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::LaneLine2dArray *>(untyped_value);
  value = item;
}

void assign_function__RvLaneResult__laneline_2d_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::LaneLine2dArray *>(
    get_function__RvLaneResult__laneline_2d_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::LaneLine2dArray *>(untyped_value);
  item = value;
}

void resize_function__RvLaneResult__laneline_2d_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::LaneLine2dArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RvLaneResult__stopline_2d_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::StopLine2dArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RvLaneResult__stopline_2d_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::StopLine2dArray> *>(untyped_member);
  return &member[index];
}

void * get_function__RvLaneResult__stopline_2d_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::StopLine2dArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__RvLaneResult__stopline_2d_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::StopLine2dArray *>(
    get_const_function__RvLaneResult__stopline_2d_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::StopLine2dArray *>(untyped_value);
  value = item;
}

void assign_function__RvLaneResult__stopline_2d_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::StopLine2dArray *>(
    get_function__RvLaneResult__stopline_2d_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::StopLine2dArray *>(untyped_value);
  item = value;
}

void resize_function__RvLaneResult__stopline_2d_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::StopLine2dArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RvLaneResult__crosswalk_2d_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::Crosswalk2dArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RvLaneResult__crosswalk_2d_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::Crosswalk2dArray> *>(untyped_member);
  return &member[index];
}

void * get_function__RvLaneResult__crosswalk_2d_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::Crosswalk2dArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__RvLaneResult__crosswalk_2d_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::Crosswalk2dArray *>(
    get_const_function__RvLaneResult__crosswalk_2d_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::Crosswalk2dArray *>(untyped_value);
  value = item;
}

void assign_function__RvLaneResult__crosswalk_2d_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::Crosswalk2dArray *>(
    get_function__RvLaneResult__crosswalk_2d_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::Crosswalk2dArray *>(untyped_value);
  item = value;
}

void resize_function__RvLaneResult__crosswalk_2d_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::Crosswalk2dArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RvLaneResult_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RvLaneResult, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "laneline_2d_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::LaneLine2dArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RvLaneResult, laneline_2d_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__RvLaneResult__laneline_2d_array,  // size() function pointer
    get_const_function__RvLaneResult__laneline_2d_array,  // get_const(index) function pointer
    get_function__RvLaneResult__laneline_2d_array,  // get(index) function pointer
    fetch_function__RvLaneResult__laneline_2d_array,  // fetch(index, &value) function pointer
    assign_function__RvLaneResult__laneline_2d_array,  // assign(index, value) function pointer
    resize_function__RvLaneResult__laneline_2d_array  // resize(index) function pointer
  },
  {
    "stopline_2d_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::StopLine2dArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RvLaneResult, stopline_2d_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__RvLaneResult__stopline_2d_array,  // size() function pointer
    get_const_function__RvLaneResult__stopline_2d_array,  // get_const(index) function pointer
    get_function__RvLaneResult__stopline_2d_array,  // get(index) function pointer
    fetch_function__RvLaneResult__stopline_2d_array,  // fetch(index, &value) function pointer
    assign_function__RvLaneResult__stopline_2d_array,  // assign(index, value) function pointer
    resize_function__RvLaneResult__stopline_2d_array  // resize(index) function pointer
  },
  {
    "crosswalk_2d_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::Crosswalk2dArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::RvLaneResult, crosswalk_2d_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__RvLaneResult__crosswalk_2d_array,  // size() function pointer
    get_const_function__RvLaneResult__crosswalk_2d_array,  // get_const(index) function pointer
    get_function__RvLaneResult__crosswalk_2d_array,  // get(index) function pointer
    fetch_function__RvLaneResult__crosswalk_2d_array,  // fetch(index, &value) function pointer
    assign_function__RvLaneResult__crosswalk_2d_array,  // assign(index, value) function pointer
    resize_function__RvLaneResult__crosswalk_2d_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RvLaneResult_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "RvLaneResult",  // message name
  4,  // number of fields
  sizeof(deva_perception_msgs::msg::RvLaneResult),
  RvLaneResult_message_member_array,  // message members
  RvLaneResult_init_function,  // function to initialize message memory (memory has to be allocated)
  RvLaneResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RvLaneResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RvLaneResult_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::RvLaneResult>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::RvLaneResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, RvLaneResult)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::RvLaneResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_mdriver_msgs/msg/detail/m_world__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_mdriver_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MWorld_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_mdriver_msgs::msg::MWorld(_init);
}

void MWorld_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_mdriver_msgs::msg::MWorld *>(message_memory);
  typed_message->~MWorld();
}

size_t size_function__MWorld__all_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::MPredictionObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MWorld__all_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::MPredictionObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__MWorld__all_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_mdriver_msgs::msg::MPredictionObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__MWorld__all_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_mdriver_msgs::msg::MPredictionObstacle *>(
    get_const_function__MWorld__all_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_mdriver_msgs::msg::MPredictionObstacle *>(untyped_value);
  value = item;
}

void assign_function__MWorld__all_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_mdriver_msgs::msg::MPredictionObstacle *>(
    get_function__MWorld__all_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_mdriver_msgs::msg::MPredictionObstacle *>(untyped_value);
  item = value;
}

void resize_function__MWorld__all_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_mdriver_msgs::msg::MPredictionObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MWorld__ego_ref_v(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MWorld__ego_ref_v(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MWorld__ego_ref_v(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MWorld__ego_ref_v(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MWorld__ego_ref_v(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MWorld__ego_ref_v(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MWorld__ego_ref_v(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MWorld__ego_ref_v(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MWorld__mdriver_meta_actions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::MdriverMetaAction> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MWorld__mdriver_meta_actions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::MdriverMetaAction> *>(untyped_member);
  return &member[index];
}

void * get_function__MWorld__mdriver_meta_actions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_mdriver_msgs::msg::MdriverMetaAction> *>(untyped_member);
  return &member[index];
}

void fetch_function__MWorld__mdriver_meta_actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_mdriver_msgs::msg::MdriverMetaAction *>(
    get_const_function__MWorld__mdriver_meta_actions(untyped_member, index));
  auto & value = *reinterpret_cast<deva_mdriver_msgs::msg::MdriverMetaAction *>(untyped_value);
  value = item;
}

void assign_function__MWorld__mdriver_meta_actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_mdriver_msgs::msg::MdriverMetaAction *>(
    get_function__MWorld__mdriver_meta_actions(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_mdriver_msgs::msg::MdriverMetaAction *>(untyped_value);
  item = value;
}

void resize_function__MWorld__mdriver_meta_actions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_mdriver_msgs::msg::MdriverMetaAction> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MWorld__refline_points(const void * untyped_member)
{
  (void)untyped_member;
  return 17;
}

const void * get_const_function__MWorld__refline_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<geometry_msgs::msg::Point, 17> *>(untyped_member);
  return &member[index];
}

void * get_function__MWorld__refline_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<geometry_msgs::msg::Point, 17> *>(untyped_member);
  return &member[index];
}

void fetch_function__MWorld__refline_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__MWorld__refline_points(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__MWorld__refline_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__MWorld__refline_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MWorld_message_member_array[8] = {
  {
    "world_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MWorld, world_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "meta_action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MWorld, meta_action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "all_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_mdriver_msgs::msg::MPredictionObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MWorld, all_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__MWorld__all_obstacles,  // size() function pointer
    get_const_function__MWorld__all_obstacles,  // get_const(index) function pointer
    get_function__MWorld__all_obstacles,  // get(index) function pointer
    fetch_function__MWorld__all_obstacles,  // fetch(index, &value) function pointer
    assign_function__MWorld__all_obstacles,  // assign(index, value) function pointer
    resize_function__MWorld__all_obstacles  // resize(index) function pointer
  },
  {
    "nudge_buffer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_mdriver_msgs::msg::NudgeBuffer>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MWorld, nudge_buffer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_ref_v",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MWorld, ego_ref_v),  // bytes offset in struct
    nullptr,  // default value
    size_function__MWorld__ego_ref_v,  // size() function pointer
    get_const_function__MWorld__ego_ref_v,  // get_const(index) function pointer
    get_function__MWorld__ego_ref_v,  // get(index) function pointer
    fetch_function__MWorld__ego_ref_v,  // fetch(index, &value) function pointer
    assign_function__MWorld__ego_ref_v,  // assign(index, value) function pointer
    resize_function__MWorld__ego_ref_v  // resize(index) function pointer
  },
  {
    "mdriver_meta_actions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_mdriver_msgs::msg::MdriverMetaAction>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MWorld, mdriver_meta_actions),  // bytes offset in struct
    nullptr,  // default value
    size_function__MWorld__mdriver_meta_actions,  // size() function pointer
    get_const_function__MWorld__mdriver_meta_actions,  // get_const(index) function pointer
    get_function__MWorld__mdriver_meta_actions,  // get(index) function pointer
    fetch_function__MWorld__mdriver_meta_actions,  // fetch(index, &value) function pointer
    assign_function__MWorld__mdriver_meta_actions,  // assign(index, value) function pointer
    resize_function__MWorld__mdriver_meta_actions  // resize(index) function pointer
  },
  {
    "score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MWorld, score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "refline_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    17,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MWorld, refline_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__MWorld__refline_points,  // size() function pointer
    get_const_function__MWorld__refline_points,  // get_const(index) function pointer
    get_function__MWorld__refline_points,  // get(index) function pointer
    fetch_function__MWorld__refline_points,  // fetch(index, &value) function pointer
    assign_function__MWorld__refline_points,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MWorld_message_members = {
  "deva_mdriver_msgs::msg",  // message namespace
  "MWorld",  // message name
  8,  // number of fields
  sizeof(deva_mdriver_msgs::msg::MWorld),
  MWorld_message_member_array,  // message members
  MWorld_init_function,  // function to initialize message memory (memory has to be allocated)
  MWorld_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MWorld_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MWorld_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_mdriver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_mdriver_msgs::msg::MWorld>()
{
  return &::deva_mdriver_msgs::msg::rosidl_typesupport_introspection_cpp::MWorld_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_mdriver_msgs, msg, MWorld)() {
  return &::deva_mdriver_msgs::msg::rosidl_typesupport_introspection_cpp::MWorld_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

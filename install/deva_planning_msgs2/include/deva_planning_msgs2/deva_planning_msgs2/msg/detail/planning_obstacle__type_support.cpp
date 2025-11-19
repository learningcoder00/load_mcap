// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/PlanningObstacle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/planning_obstacle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_planning_msgs2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PlanningObstacle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::PlanningObstacle(_init);
}

void PlanningObstacle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::PlanningObstacle *>(message_memory);
  typed_message->~PlanningObstacle();
}

size_t size_function__PlanningObstacle__current_line_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningObstacle__current_line_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningObstacle__current_line_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningObstacle__current_line_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PlanningObstacle__current_line_id(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningObstacle__current_line_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PlanningObstacle__current_line_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningObstacle__current_line_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningObstacle__target_line_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningObstacle__target_line_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningObstacle__target_line_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningObstacle__target_line_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PlanningObstacle__target_line_id(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningObstacle__target_line_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PlanningObstacle__target_line_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningObstacle__target_line_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningObstacle__decision_tag(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningObstacle__decision_tag(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningObstacle__decision_tag(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningObstacle__decision_tag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningObstacle__decision_tag(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningObstacle__decision_tag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningObstacle__decision_tag(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningObstacle__decision_tag(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningObstacle__scene_understanding(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningObstacle__scene_understanding(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningObstacle__scene_understanding(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningObstacle__scene_understanding(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningObstacle__scene_understanding(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningObstacle__scene_understanding(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningObstacle__scene_understanding(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningObstacle__scene_understanding(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningObstacle__scalable_flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningObstacle__scalable_flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningObstacle__scalable_flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningObstacle__scalable_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningObstacle__scalable_flags(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningObstacle__scalable_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningObstacle__scalable_flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningObstacle__scalable_flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningObstacle__scalable_multimap(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningObstacle__scalable_multimap(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningObstacle__scalable_multimap(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningObstacle__scalable_multimap(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(
    get_const_function__PlanningObstacle__scalable_multimap(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(untyped_value);
  value = item;
}

void assign_function__PlanningObstacle__scalable_multimap(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(
    get_function__PlanningObstacle__scalable_multimap(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(untyped_value);
  item = value;
}

void resize_function__PlanningObstacle__scalable_multimap(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningObstacle_message_member_array[12] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_line_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, current_line_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningObstacle__current_line_id,  // size() function pointer
    get_const_function__PlanningObstacle__current_line_id,  // get_const(index) function pointer
    get_function__PlanningObstacle__current_line_id,  // get(index) function pointer
    fetch_function__PlanningObstacle__current_line_id,  // fetch(index, &value) function pointer
    assign_function__PlanningObstacle__current_line_id,  // assign(index, value) function pointer
    resize_function__PlanningObstacle__current_line_id  // resize(index) function pointer
  },
  {
    "target_line_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, target_line_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningObstacle__target_line_id,  // size() function pointer
    get_const_function__PlanningObstacle__target_line_id,  // get_const(index) function pointer
    get_function__PlanningObstacle__target_line_id,  // get(index) function pointer
    fetch_function__PlanningObstacle__target_line_id,  // fetch(index, &value) function pointer
    assign_function__PlanningObstacle__target_line_id,  // assign(index, value) function pointer
    resize_function__PlanningObstacle__target_line_id  // resize(index) function pointer
  },
  {
    "decision_tag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, decision_tag),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningObstacle__decision_tag,  // size() function pointer
    get_const_function__PlanningObstacle__decision_tag,  // get_const(index) function pointer
    get_function__PlanningObstacle__decision_tag,  // get(index) function pointer
    fetch_function__PlanningObstacle__decision_tag,  // fetch(index, &value) function pointer
    assign_function__PlanningObstacle__decision_tag,  // assign(index, value) function pointer
    resize_function__PlanningObstacle__decision_tag  // resize(index) function pointer
  },
  {
    "scene_understanding",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, scene_understanding),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningObstacle__scene_understanding,  // size() function pointer
    get_const_function__PlanningObstacle__scene_understanding,  // get_const(index) function pointer
    get_function__PlanningObstacle__scene_understanding,  // get(index) function pointer
    fetch_function__PlanningObstacle__scene_understanding,  // fetch(index, &value) function pointer
    assign_function__PlanningObstacle__scene_understanding,  // assign(index, value) function pointer
    resize_function__PlanningObstacle__scene_understanding  // resize(index) function pointer
  },
  {
    "cutin_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, cutin_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cutout_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, cutout_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ttc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, ttc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, priority),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scalable_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, scalable_flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningObstacle__scalable_flags,  // size() function pointer
    get_const_function__PlanningObstacle__scalable_flags,  // get_const(index) function pointer
    get_function__PlanningObstacle__scalable_flags,  // get(index) function pointer
    fetch_function__PlanningObstacle__scalable_flags,  // fetch(index, &value) function pointer
    assign_function__PlanningObstacle__scalable_flags,  // assign(index, value) function pointer
    resize_function__PlanningObstacle__scalable_flags  // resize(index) function pointer
  },
  {
    "scalable_multimap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningObstacle, scalable_multimap),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningObstacle__scalable_multimap,  // size() function pointer
    get_const_function__PlanningObstacle__scalable_multimap,  // get_const(index) function pointer
    get_function__PlanningObstacle__scalable_multimap,  // get(index) function pointer
    fetch_function__PlanningObstacle__scalable_multimap,  // fetch(index, &value) function pointer
    assign_function__PlanningObstacle__scalable_multimap,  // assign(index, value) function pointer
    resize_function__PlanningObstacle__scalable_multimap  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningObstacle_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "PlanningObstacle",  // message name
  12,  // number of fields
  sizeof(deva_planning_msgs2::msg::PlanningObstacle),
  PlanningObstacle_message_member_array,  // message members
  PlanningObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningObstacle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningObstacle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningObstacle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_planning_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs2::msg::PlanningObstacle>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PlanningObstacle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, PlanningObstacle)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PlanningObstacle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

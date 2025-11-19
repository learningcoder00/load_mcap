// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/AEBObstacleArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/aeb_obstacle_array__struct.hpp"
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

void AEBObstacleArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::AEBObstacleArray(_init);
}

void AEBObstacleArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::AEBObstacleArray *>(message_memory);
  typed_message->~AEBObstacleArray();
}

size_t size_function__AEBObstacleArray__aeb_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::AEBObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AEBObstacleArray__aeb_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::AEBObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__AEBObstacleArray__aeb_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::AEBObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__AEBObstacleArray__aeb_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::AEBObstacle *>(
    get_const_function__AEBObstacleArray__aeb_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::AEBObstacle *>(untyped_value);
  value = item;
}

void assign_function__AEBObstacleArray__aeb_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::AEBObstacle *>(
    get_function__AEBObstacleArray__aeb_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::AEBObstacle *>(untyped_value);
  item = value;
}

void resize_function__AEBObstacleArray__aeb_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::AEBObstacle> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AEBObstacleArray_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::AEBObstacleArray, header),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::AEBObstacleArray, translation),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::AEBObstacleArray, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aeb_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::AEBObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::AEBObstacleArray, aeb_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__AEBObstacleArray__aeb_obstacles,  // size() function pointer
    get_const_function__AEBObstacleArray__aeb_obstacles,  // get_const(index) function pointer
    get_function__AEBObstacleArray__aeb_obstacles,  // get(index) function pointer
    fetch_function__AEBObstacleArray__aeb_obstacles,  // fetch(index, &value) function pointer
    assign_function__AEBObstacleArray__aeb_obstacles,  // assign(index, value) function pointer
    resize_function__AEBObstacleArray__aeb_obstacles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AEBObstacleArray_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "AEBObstacleArray",  // message name
  4,  // number of fields
  sizeof(deva_perception_msgs::msg::AEBObstacleArray),
  AEBObstacleArray_message_member_array,  // message members
  AEBObstacleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  AEBObstacleArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AEBObstacleArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AEBObstacleArray_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::AEBObstacleArray>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::AEBObstacleArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, AEBObstacleArray)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::AEBObstacleArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

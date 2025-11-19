// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/NavOpenspaceObstacle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/nav_openspace_obstacle__struct.hpp"
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

void NavOpenspaceObstacle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::NavOpenspaceObstacle(_init);
}

void NavOpenspaceObstacle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::NavOpenspaceObstacle *>(message_memory);
  typed_message->~NavOpenspaceObstacle();
}

size_t size_function__NavOpenspaceObstacle__xy_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceObstacle__xy_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceObstacle__xy_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceObstacle__xy_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavOpenspaceObstacle__xy_vec(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceObstacle__xy_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavOpenspaceObstacle__xy_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceObstacle__xy_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavOpenspaceObstacle_message_member_array[2] = {
  {
    "obs_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::NavOpenspaceObstacle, obs_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "xy_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::NavOpenspaceObstacle, xy_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceObstacle__xy_vec,  // size() function pointer
    get_const_function__NavOpenspaceObstacle__xy_vec,  // get_const(index) function pointer
    get_function__NavOpenspaceObstacle__xy_vec,  // get(index) function pointer
    fetch_function__NavOpenspaceObstacle__xy_vec,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceObstacle__xy_vec,  // assign(index, value) function pointer
    resize_function__NavOpenspaceObstacle__xy_vec  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavOpenspaceObstacle_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "NavOpenspaceObstacle",  // message name
  2,  // number of fields
  sizeof(deva_planning_msgs2::msg::NavOpenspaceObstacle),
  NavOpenspaceObstacle_message_member_array,  // message members
  NavOpenspaceObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  NavOpenspaceObstacle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavOpenspaceObstacle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavOpenspaceObstacle_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::NavOpenspaceObstacle>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::NavOpenspaceObstacle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, NavOpenspaceObstacle)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::NavOpenspaceObstacle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

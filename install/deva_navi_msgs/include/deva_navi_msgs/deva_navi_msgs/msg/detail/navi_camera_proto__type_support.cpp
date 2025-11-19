// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/NaviCameraProto.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_navi_msgs/msg/detail/navi_camera_proto__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_navi_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NaviCameraProto_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_navi_msgs::msg::NaviCameraProto(_init);
}

void NaviCameraProto_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_navi_msgs::msg::NaviCameraProto *>(message_memory);
  typed_message->~NaviCameraProto();
}

size_t size_function__NaviCameraProto__speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NaviCameraProto__speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__NaviCameraProto__speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__NaviCameraProto__speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__NaviCameraProto__speed(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__NaviCameraProto__speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__NaviCameraProto__speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__NaviCameraProto__speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NaviCameraProto__sub_cameras(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::NaviSubCameraProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NaviCameraProto__sub_cameras(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::NaviSubCameraProto> *>(untyped_member);
  return &member[index];
}

void * get_function__NaviCameraProto__sub_cameras(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::NaviSubCameraProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__NaviCameraProto__sub_cameras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::NaviSubCameraProto *>(
    get_const_function__NaviCameraProto__sub_cameras(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::NaviSubCameraProto *>(untyped_value);
  value = item;
}

void assign_function__NaviCameraProto__sub_cameras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::NaviSubCameraProto *>(
    get_function__NaviCameraProto__sub_cameras(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::NaviSubCameraProto *>(untyped_value);
  item = value;
}

void resize_function__NaviCameraProto__sub_cameras(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::NaviSubCameraProto> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NaviCameraProto_message_member_array[13] = {
  {
    "coord_3d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::Coord3DDoubleProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, coord_3d),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, type),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__NaviCameraProto__speed,  // size() function pointer
    get_const_function__NaviCameraProto__speed,  // get_const(index) function pointer
    get_function__NaviCameraProto__speed,  // get(index) function pointer
    fetch_function__NaviCameraProto__speed,  // fetch(index, &value) function pointer
    assign_function__NaviCameraProto__speed,  // assign(index, value) function pointer
    resize_function__NaviCameraProto__speed  // resize(index) function pointer
  },
  {
    "road_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, road_class),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "segment_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, segment_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, link_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "distance_to_end",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, distance_to_end),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sub_cameras",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::NaviSubCameraProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, sub_cameras),  // bytes offset in struct
    nullptr,  // default value
    size_function__NaviCameraProto__sub_cameras,  // size() function pointer
    get_const_function__NaviCameraProto__sub_cameras,  // get_const(index) function pointer
    get_function__NaviCameraProto__sub_cameras,  // get(index) function pointer
    fetch_function__NaviCameraProto__sub_cameras,  // fetch(index, &value) function pointer
    assign_function__NaviCameraProto__sub_cameras,  // assign(index, value) function pointer
    resize_function__NaviCameraProto__sub_cameras  // resize(index) function pointer
  },
  {
    "penalty",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, penalty),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_new",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, is_new),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_hidden",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviCameraProto, is_hidden),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NaviCameraProto_message_members = {
  "deva_navi_msgs::msg",  // message namespace
  "NaviCameraProto",  // message name
  13,  // number of fields
  sizeof(deva_navi_msgs::msg::NaviCameraProto),
  NaviCameraProto_message_member_array,  // message members
  NaviCameraProto_init_function,  // function to initialize message memory (memory has to be allocated)
  NaviCameraProto_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NaviCameraProto_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NaviCameraProto_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_navi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_navi_msgs::msg::NaviCameraProto>()
{
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::NaviCameraProto_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_navi_msgs, msg, NaviCameraProto)() {
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::NaviCameraProto_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

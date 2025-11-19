// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/SegmentInfoProto.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_navi_msgs/msg/detail/segment_info_proto__struct.hpp"
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

void SegmentInfoProto_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_navi_msgs::msg::SegmentInfoProto(_init);
}

void SegmentInfoProto_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_navi_msgs::msg::SegmentInfoProto *>(message_memory);
  typed_message->~SegmentInfoProto();
}

size_t size_function__SegmentInfoProto__link_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::LinkInfoProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SegmentInfoProto__link_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::LinkInfoProto> *>(untyped_member);
  return &member[index];
}

void * get_function__SegmentInfoProto__link_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::LinkInfoProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__SegmentInfoProto__link_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::LinkInfoProto *>(
    get_const_function__SegmentInfoProto__link_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::LinkInfoProto *>(untyped_value);
  value = item;
}

void assign_function__SegmentInfoProto__link_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::LinkInfoProto *>(
    get_function__SegmentInfoProto__link_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::LinkInfoProto *>(untyped_value);
  item = value;
}

void resize_function__SegmentInfoProto__link_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::LinkInfoProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SegmentInfoProto__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SegmentInfoProto__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return &member[index];
}

void * get_function__SegmentInfoProto__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__SegmentInfoProto__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::Coord3DDoubleProto *>(
    get_const_function__SegmentInfoProto__points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::Coord3DDoubleProto *>(untyped_value);
  value = item;
}

void assign_function__SegmentInfoProto__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::Coord3DDoubleProto *>(
    get_function__SegmentInfoProto__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::Coord3DDoubleProto *>(untyped_value);
  item = value;
}

void resize_function__SegmentInfoProto__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SegmentInfoProto__maneuver_icons(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::IconRoadProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SegmentInfoProto__maneuver_icons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::IconRoadProto> *>(untyped_member);
  return &member[index];
}

void * get_function__SegmentInfoProto__maneuver_icons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::IconRoadProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__SegmentInfoProto__maneuver_icons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::IconRoadProto *>(
    get_const_function__SegmentInfoProto__maneuver_icons(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::IconRoadProto *>(untyped_value);
  value = item;
}

void assign_function__SegmentInfoProto__maneuver_icons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::IconRoadProto *>(
    get_function__SegmentInfoProto__maneuver_icons(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::IconRoadProto *>(untyped_value);
  item = value;
}

void resize_function__SegmentInfoProto__maneuver_icons(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::IconRoadProto> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SegmentInfoProto_message_member_array[20] = {
  {
    "link_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::LinkInfoProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, link_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__SegmentInfoProto__link_infos,  // size() function pointer
    get_const_function__SegmentInfoProto__link_infos,  // get_const(index) function pointer
    get_function__SegmentInfoProto__link_infos,  // get(index) function pointer
    fetch_function__SegmentInfoProto__link_infos,  // fetch(index, &value) function pointer
    assign_function__SegmentInfoProto__link_infos,  // assign(index, value) function pointer
    resize_function__SegmentInfoProto__link_infos  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::Coord3DDoubleProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__SegmentInfoProto__points,  // size() function pointer
    get_const_function__SegmentInfoProto__points,  // get_const(index) function pointer
    get_function__SegmentInfoProto__points,  // get(index) function pointer
    fetch_function__SegmentInfoProto__points,  // fetch(index, &value) function pointer
    assign_function__SegmentInfoProto__points,  // assign(index, value) function pointer
    resize_function__SegmentInfoProto__points  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, is_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "related_path_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, related_path_id),  // bytes offset in struct
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
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, segment_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "main_action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, main_action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "assistant_action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, assistant_action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "slope",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, slope),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "toll_cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, toll_cost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "toll_dist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, toll_dist),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "travel_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, travel_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traffic_light_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, traffic_light_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_end_of_road",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, is_end_of_road),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "toll_road_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, toll_road_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "guideboard_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, guideboard_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "exit_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, exit_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crossing_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, crossing_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "maneuver_icons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::IconRoadProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, maneuver_icons),  // bytes offset in struct
    nullptr,  // default value
    size_function__SegmentInfoProto__maneuver_icons,  // size() function pointer
    get_const_function__SegmentInfoProto__maneuver_icons,  // get_const(index) function pointer
    get_function__SegmentInfoProto__maneuver_icons,  // get(index) function pointer
    fetch_function__SegmentInfoProto__maneuver_icons,  // fetch(index, &value) function pointer
    assign_function__SegmentInfoProto__maneuver_icons,  // assign(index, value) function pointer
    resize_function__SegmentInfoProto__maneuver_icons  // resize(index) function pointer
  },
  {
    "uturn_and_arrivedest",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::SegmentInfoProto, uturn_and_arrivedest),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SegmentInfoProto_message_members = {
  "deva_navi_msgs::msg",  // message namespace
  "SegmentInfoProto",  // message name
  20,  // number of fields
  sizeof(deva_navi_msgs::msg::SegmentInfoProto),
  SegmentInfoProto_message_member_array,  // message members
  SegmentInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  SegmentInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SegmentInfoProto_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SegmentInfoProto_message_members,
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
get_message_type_support_handle<deva_navi_msgs::msg::SegmentInfoProto>()
{
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::SegmentInfoProto_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_navi_msgs, msg, SegmentInfoProto)() {
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::SegmentInfoProto_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

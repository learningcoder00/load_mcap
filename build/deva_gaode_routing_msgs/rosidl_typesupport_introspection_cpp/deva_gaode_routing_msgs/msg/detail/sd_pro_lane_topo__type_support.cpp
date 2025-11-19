// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneTopo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_topo__struct.hpp"
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

void SdProLaneTopo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::SdProLaneTopo(_init);
}

void SdProLaneTopo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::SdProLaneTopo *>(message_memory);
  typed_message->~SdProLaneTopo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SdProLaneTopo_message_member_array[3] = {
  {
    "road_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProLaneTopo, road_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProLaneTopo, lane_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::SdProLaneTopo, lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SdProLaneTopo_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "SdProLaneTopo",  // message name
  3,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::SdProLaneTopo),
  SdProLaneTopo_message_member_array,  // message members
  SdProLaneTopo_init_function,  // function to initialize message memory (memory has to be allocated)
  SdProLaneTopo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SdProLaneTopo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SdProLaneTopo_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::SdProLaneTopo>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::SdProLaneTopo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, SdProLaneTopo)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::SdProLaneTopo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

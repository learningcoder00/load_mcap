// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deva_common_msgs/msg/detail/header__functions.h"  // header
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__functions.h"  // ehp_meta_data
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__functions.h"  // ehp_position
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__functions.h"  // ehp_profile_longs
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__functions.h"  // ehp_profile_shorts
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__functions.h"  // ehp_segments
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__functions.h"  // ehp_stubs
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__functions.h"  // feature_points
#include "deva_gaode_routing_msgs/msg/detail/heterogeneous_match_link__functions.h"  // heterogeneous_match_link
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__functions.h"  // intersection_roads
#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__functions.h"  // intersection_road_nodes
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__functions.h"  // j6m_data
#include "deva_gaode_routing_msgs/msg/detail/lane__functions.h"  // lanes
#include "deva_gaode_routing_msgs/msg/detail/link__functions.h"  // link
#include "deva_gaode_routing_msgs/msg/detail/node__functions.h"  // node
#include "deva_gaode_routing_msgs/msg/detail/position_match_link__functions.h"  // position_match_link
#include "deva_gaode_routing_msgs/msg/detail/route_guide_response__functions.h"  // route_guide_response
#include "deva_gaode_routing_msgs/msg/detail/stop_line__functions.h"  // stoplines

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_gaode_routing_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_gaode_routing_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpMetaData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpMetaData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpMetaData)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpPosition)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileLong(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileLong(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpProfileLong)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileShort(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileShort(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpProfileShort)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpSegment(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpSegment(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpSegment)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__EhpStub(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__EhpStub(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpStub)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__FeaturePointById(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__FeaturePointById(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeaturePointById)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__HeterogeneousMatchLink(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__HeterogeneousMatchLink(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, HeterogeneousMatchLink)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__IntersectionRoad(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__IntersectionRoad(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, IntersectionRoad)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__IntersectionRoadNode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__IntersectionRoadNode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, IntersectionRoadNode)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__J6mData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__J6mData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mData)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__LANE(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__LANE(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LANE)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__Link(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__Link(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Link)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__Node(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Node)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__PositionMatchLink(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__PositionMatchLink(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, PositionMatchLink)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__RouteGuideResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__RouteGuideResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RouteGuideResponse)();
size_t get_serialized_size_deva_gaode_routing_msgs__msg__StopLine(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_gaode_routing_msgs__msg__StopLine(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, StopLine)();


using _AdasisMap__ros_msg_type = deva_gaode_routing_msgs__msg__AdasisMap;

static bool _AdasisMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AdasisMap__ros_msg_type * ros_message = static_cast<const _AdasisMap__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: is_update_ehp_position
  {
    cdr << ros_message->is_update_ehp_position;
  }

  // Field name: ehp_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpPosition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ehp_position, cdr))
    {
      return false;
    }
  }

  // Field name: is_update_ehp_meta_data
  {
    cdr << ros_message->is_update_ehp_meta_data;
  }

  // Field name: ehp_meta_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpMetaData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ehp_meta_data, cdr))
    {
      return false;
    }
  }

  // Field name: is_update_ehp_segments
  {
    cdr << ros_message->is_update_ehp_segments;
  }

  // Field name: ehp_segments
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpSegment
      )()->data);
    size_t size = ros_message->ehp_segments.size;
    auto array_ptr = ros_message->ehp_segments.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: is_update_ehp_stubs
  {
    cdr << ros_message->is_update_ehp_stubs;
  }

  // Field name: ehp_stubs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpStub
      )()->data);
    size_t size = ros_message->ehp_stubs.size;
    auto array_ptr = ros_message->ehp_stubs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: is_update_ehp_profile_shorts
  {
    cdr << ros_message->is_update_ehp_profile_shorts;
  }

  // Field name: ehp_profile_shorts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpProfileShort
      )()->data);
    size_t size = ros_message->ehp_profile_shorts.size;
    auto array_ptr = ros_message->ehp_profile_shorts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: is_update_ehp_profile_longs
  {
    cdr << ros_message->is_update_ehp_profile_longs;
  }

  // Field name: ehp_profile_longs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpProfileLong
      )()->data);
    size_t size = ros_message->ehp_profile_longs.size;
    auto array_ptr = ros_message->ehp_profile_longs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: link
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Link
      )()->data);
    size_t size = ros_message->link.size;
    auto array_ptr = ros_message->link.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Node
      )()->data);
    size_t size = ros_message->node.size;
    auto array_ptr = ros_message->node.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: feature_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeaturePointById
      )()->data);
    size_t size = ros_message->feature_points.size;
    auto array_ptr = ros_message->feature_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: lanes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LANE
      )()->data);
    size_t size = ros_message->lanes.size;
    auto array_ptr = ros_message->lanes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: stoplines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, StopLine
      )()->data);
    size_t size = ros_message->stoplines.size;
    auto array_ptr = ros_message->stoplines.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: intersection_road_nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, IntersectionRoadNode
      )()->data);
    size_t size = ros_message->intersection_road_nodes.size;
    auto array_ptr = ros_message->intersection_road_nodes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: intersection_roads
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, IntersectionRoad
      )()->data);
    size_t size = ros_message->intersection_roads.size;
    auto array_ptr = ros_message->intersection_roads.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: position_match_link
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, PositionMatchLink
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position_match_link, cdr))
    {
      return false;
    }
  }

  // Field name: heterogeneous_match_link
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, HeterogeneousMatchLink
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heterogeneous_match_link, cdr))
    {
      return false;
    }
  }

  // Field name: route_guide_response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RouteGuideResponse
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->route_guide_response, cdr))
    {
      return false;
    }
  }

  // Field name: j6m_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->j6m_data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AdasisMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AdasisMap__ros_msg_type * ros_message = static_cast<_AdasisMap__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: is_update_ehp_position
  {
    cdr >> ros_message->is_update_ehp_position;
  }

  // Field name: ehp_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpPosition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ehp_position))
    {
      return false;
    }
  }

  // Field name: is_update_ehp_meta_data
  {
    cdr >> ros_message->is_update_ehp_meta_data;
  }

  // Field name: ehp_meta_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpMetaData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ehp_meta_data))
    {
      return false;
    }
  }

  // Field name: is_update_ehp_segments
  {
    cdr >> ros_message->is_update_ehp_segments;
  }

  // Field name: ehp_segments
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpSegment
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ehp_segments.data) {
      deva_gaode_routing_msgs__msg__EhpSegment__Sequence__fini(&ros_message->ehp_segments);
    }
    if (!deva_gaode_routing_msgs__msg__EhpSegment__Sequence__init(&ros_message->ehp_segments, size)) {
      fprintf(stderr, "failed to create array for field 'ehp_segments'");
      return false;
    }
    auto array_ptr = ros_message->ehp_segments.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: is_update_ehp_stubs
  {
    cdr >> ros_message->is_update_ehp_stubs;
  }

  // Field name: ehp_stubs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpStub
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ehp_stubs.data) {
      deva_gaode_routing_msgs__msg__EhpStub__Sequence__fini(&ros_message->ehp_stubs);
    }
    if (!deva_gaode_routing_msgs__msg__EhpStub__Sequence__init(&ros_message->ehp_stubs, size)) {
      fprintf(stderr, "failed to create array for field 'ehp_stubs'");
      return false;
    }
    auto array_ptr = ros_message->ehp_stubs.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: is_update_ehp_profile_shorts
  {
    cdr >> ros_message->is_update_ehp_profile_shorts;
  }

  // Field name: ehp_profile_shorts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpProfileShort
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ehp_profile_shorts.data) {
      deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__fini(&ros_message->ehp_profile_shorts);
    }
    if (!deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__init(&ros_message->ehp_profile_shorts, size)) {
      fprintf(stderr, "failed to create array for field 'ehp_profile_shorts'");
      return false;
    }
    auto array_ptr = ros_message->ehp_profile_shorts.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: is_update_ehp_profile_longs
  {
    cdr >> ros_message->is_update_ehp_profile_longs;
  }

  // Field name: ehp_profile_longs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, EhpProfileLong
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ehp_profile_longs.data) {
      deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__fini(&ros_message->ehp_profile_longs);
    }
    if (!deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__init(&ros_message->ehp_profile_longs, size)) {
      fprintf(stderr, "failed to create array for field 'ehp_profile_longs'");
      return false;
    }
    auto array_ptr = ros_message->ehp_profile_longs.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: link
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Link
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->link.data) {
      deva_gaode_routing_msgs__msg__Link__Sequence__fini(&ros_message->link);
    }
    if (!deva_gaode_routing_msgs__msg__Link__Sequence__init(&ros_message->link, size)) {
      fprintf(stderr, "failed to create array for field 'link'");
      return false;
    }
    auto array_ptr = ros_message->link.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: node
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, Node
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->node.data) {
      deva_gaode_routing_msgs__msg__Node__Sequence__fini(&ros_message->node);
    }
    if (!deva_gaode_routing_msgs__msg__Node__Sequence__init(&ros_message->node, size)) {
      fprintf(stderr, "failed to create array for field 'node'");
      return false;
    }
    auto array_ptr = ros_message->node.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: feature_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, FeaturePointById
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->feature_points.data) {
      deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__fini(&ros_message->feature_points);
    }
    if (!deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__init(&ros_message->feature_points, size)) {
      fprintf(stderr, "failed to create array for field 'feature_points'");
      return false;
    }
    auto array_ptr = ros_message->feature_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: lanes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, LANE
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->lanes.data) {
      deva_gaode_routing_msgs__msg__LANE__Sequence__fini(&ros_message->lanes);
    }
    if (!deva_gaode_routing_msgs__msg__LANE__Sequence__init(&ros_message->lanes, size)) {
      fprintf(stderr, "failed to create array for field 'lanes'");
      return false;
    }
    auto array_ptr = ros_message->lanes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: stoplines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, StopLine
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->stoplines.data) {
      deva_gaode_routing_msgs__msg__StopLine__Sequence__fini(&ros_message->stoplines);
    }
    if (!deva_gaode_routing_msgs__msg__StopLine__Sequence__init(&ros_message->stoplines, size)) {
      fprintf(stderr, "failed to create array for field 'stoplines'");
      return false;
    }
    auto array_ptr = ros_message->stoplines.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: intersection_road_nodes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, IntersectionRoadNode
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->intersection_road_nodes.data) {
      deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__fini(&ros_message->intersection_road_nodes);
    }
    if (!deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__init(&ros_message->intersection_road_nodes, size)) {
      fprintf(stderr, "failed to create array for field 'intersection_road_nodes'");
      return false;
    }
    auto array_ptr = ros_message->intersection_road_nodes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: intersection_roads
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, IntersectionRoad
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->intersection_roads.data) {
      deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__fini(&ros_message->intersection_roads);
    }
    if (!deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__init(&ros_message->intersection_roads, size)) {
      fprintf(stderr, "failed to create array for field 'intersection_roads'");
      return false;
    }
    auto array_ptr = ros_message->intersection_roads.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: position_match_link
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, PositionMatchLink
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position_match_link))
    {
      return false;
    }
  }

  // Field name: heterogeneous_match_link
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, HeterogeneousMatchLink
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heterogeneous_match_link))
    {
      return false;
    }
  }

  // Field name: route_guide_response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, RouteGuideResponse
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->route_guide_response))
    {
      return false;
    }
  }

  // Field name: j6m_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, J6mData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->j6m_data))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t get_serialized_size_deva_gaode_routing_msgs__msg__AdasisMap(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AdasisMap__ros_msg_type * ros_message = static_cast<const _AdasisMap__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name is_update_ehp_position
  {
    size_t item_size = sizeof(ros_message->is_update_ehp_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ehp_position

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__EhpPosition(
    &(ros_message->ehp_position), current_alignment);
  // field.name is_update_ehp_meta_data
  {
    size_t item_size = sizeof(ros_message->is_update_ehp_meta_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ehp_meta_data

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__EhpMetaData(
    &(ros_message->ehp_meta_data), current_alignment);
  // field.name is_update_ehp_segments
  {
    size_t item_size = sizeof(ros_message->is_update_ehp_segments);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ehp_segments
  {
    size_t array_size = ros_message->ehp_segments.size;
    auto array_ptr = ros_message->ehp_segments.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__EhpSegment(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name is_update_ehp_stubs
  {
    size_t item_size = sizeof(ros_message->is_update_ehp_stubs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ehp_stubs
  {
    size_t array_size = ros_message->ehp_stubs.size;
    auto array_ptr = ros_message->ehp_stubs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__EhpStub(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name is_update_ehp_profile_shorts
  {
    size_t item_size = sizeof(ros_message->is_update_ehp_profile_shorts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ehp_profile_shorts
  {
    size_t array_size = ros_message->ehp_profile_shorts.size;
    auto array_ptr = ros_message->ehp_profile_shorts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileShort(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name is_update_ehp_profile_longs
  {
    size_t item_size = sizeof(ros_message->is_update_ehp_profile_longs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ehp_profile_longs
  {
    size_t array_size = ros_message->ehp_profile_longs.size;
    auto array_ptr = ros_message->ehp_profile_longs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileLong(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name link
  {
    size_t array_size = ros_message->link.size;
    auto array_ptr = ros_message->link.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__Link(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name node
  {
    size_t array_size = ros_message->node.size;
    auto array_ptr = ros_message->node.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__Node(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name feature_points
  {
    size_t array_size = ros_message->feature_points.size;
    auto array_ptr = ros_message->feature_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__FeaturePointById(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name lanes
  {
    size_t array_size = ros_message->lanes.size;
    auto array_ptr = ros_message->lanes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__LANE(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name stoplines
  {
    size_t array_size = ros_message->stoplines.size;
    auto array_ptr = ros_message->stoplines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__StopLine(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name intersection_road_nodes
  {
    size_t array_size = ros_message->intersection_road_nodes.size;
    auto array_ptr = ros_message->intersection_road_nodes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__IntersectionRoadNode(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name intersection_roads
  {
    size_t array_size = ros_message->intersection_roads.size;
    auto array_ptr = ros_message->intersection_roads.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__IntersectionRoad(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name position_match_link

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__PositionMatchLink(
    &(ros_message->position_match_link), current_alignment);
  // field.name heterogeneous_match_link

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__HeterogeneousMatchLink(
    &(ros_message->heterogeneous_match_link), current_alignment);
  // field.name route_guide_response

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__RouteGuideResponse(
    &(ros_message->route_guide_response), current_alignment);
  // field.name j6m_data

  current_alignment += get_serialized_size_deva_gaode_routing_msgs__msg__J6mData(
    &(ros_message->j6m_data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AdasisMap__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_gaode_routing_msgs__msg__AdasisMap(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_gaode_routing_msgs
size_t max_serialized_size_deva_gaode_routing_msgs__msg__AdasisMap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_update_ehp_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ehp_position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__EhpPosition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_update_ehp_meta_data
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ehp_meta_data
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__EhpMetaData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_update_ehp_segments
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ehp_segments
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__EhpSegment(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_update_ehp_stubs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ehp_stubs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__EhpStub(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_update_ehp_profile_shorts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ehp_profile_shorts
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileShort(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_update_ehp_profile_longs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ehp_profile_longs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__EhpProfileLong(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: link
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__Link(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: node
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__Node(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: feature_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__FeaturePointById(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lanes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__LANE(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: stoplines
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__StopLine(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: intersection_road_nodes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__IntersectionRoadNode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: intersection_roads
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__IntersectionRoad(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: position_match_link
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__PositionMatchLink(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: heterogeneous_match_link
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__HeterogeneousMatchLink(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: route_guide_response
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__RouteGuideResponse(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: j6m_data
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_gaode_routing_msgs__msg__J6mData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_gaode_routing_msgs__msg__AdasisMap;
    is_plain =
      (
      offsetof(DataType, j6m_data) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AdasisMap__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_gaode_routing_msgs__msg__AdasisMap(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AdasisMap = {
  "deva_gaode_routing_msgs::msg",
  "AdasisMap",
  _AdasisMap__cdr_serialize,
  _AdasisMap__cdr_deserialize,
  _AdasisMap__get_serialized_size,
  _AdasisMap__max_serialized_size
};

static rosidl_message_type_support_t _AdasisMap__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AdasisMap,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_gaode_routing_msgs, msg, AdasisMap)() {
  return &_AdasisMap__type_support;
}

#if defined(__cplusplus)
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__functions.h"
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

#include "deva_navi_msgs/msg/detail/charge_station_info_proto__functions.h"  // charge_station_info
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"  // all_3d_traffic_lights
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__functions.h"  // elec_path_info
#include "deva_navi_msgs/msg/detail/group_segment_proto__functions.h"  // group_segments
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__functions.h"  // line_icon_points
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__functions.h"  // odd_seg_infos
#include "deva_navi_msgs/msg/detail/path_description_info_proto__functions.h"  // path_description_info
#include "deva_navi_msgs/msg/detail/poi_info_proto__functions.h"  // end_poi
#include "deva_navi_msgs/msg/detail/restriction_info_proto__functions.h"  // restriction_info
#include "deva_navi_msgs/msg/detail/segment_info_proto__functions.h"  // segment_infos
#include "deva_navi_msgs/msg/detail/tip_info_proto__functions.h"  // tip
#include "deva_navi_msgs/msg/detail/via_point_info_proto__functions.h"  // via_point_info
#include "rosidl_runtime_c/primitives_sequence.h"  // city_adcode_list
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // city_adcode_list
#include "rosidl_runtime_c/string.h"  // navi_id, offline_req_custom_identity_id, plan_channel_id
#include "rosidl_runtime_c/string_functions.h"  // navi_id, offline_req_custom_identity_id, plan_channel_id

// forward declare type support functions
size_t get_serialized_size_deva_navi_msgs__msg__ChargeStationInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__ChargeStationInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ChargeStationInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
size_t get_serialized_size_deva_navi_msgs__msg__ElecPathInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__ElecPathInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ElecPathInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__GroupSegmentProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__GroupSegmentProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GroupSegmentProto)();
size_t get_serialized_size_deva_navi_msgs__msg__LineIconPointProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__LineIconPointProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, LineIconPointProto)();
size_t get_serialized_size_deva_navi_msgs__msg__OddSegInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__OddSegInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, OddSegInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__POIInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__POIInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, POIInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__PathDescriptionInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__PathDescriptionInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, PathDescriptionInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__RestrictionInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__RestrictionInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, RestrictionInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__SegmentInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__SegmentInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, SegmentInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__TipInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__TipInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, TipInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__ViaPointInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__ViaPointInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ViaPointInfoProto)();


using _AmapPathInfoProto__ros_msg_type = deva_navi_msgs__msg__AmapPathInfoProto;

static bool _AmapPathInfoProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AmapPathInfoProto__ros_msg_type * ros_message = static_cast<const _AmapPathInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: all_3d_traffic_lights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
      )()->data);
    size_t size = ros_message->all_3d_traffic_lights.size;
    auto array_ptr = ros_message->all_3d_traffic_lights.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: segment_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, SegmentInfoProto
      )()->data);
    size_t size = ros_message->segment_infos.size;
    auto array_ptr = ros_message->segment_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: line_icon_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, LineIconPointProto
      )()->data);
    size_t size = ros_message->line_icon_points.size;
    auto array_ptr = ros_message->line_icon_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: city_adcode_list
  {
    size_t size = ros_message->city_adcode_list.size;
    auto array_ptr = ros_message->city_adcode_list.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: via_point_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ViaPointInfoProto
      )()->data);
    size_t size = ros_message->via_point_info.size;
    auto array_ptr = ros_message->via_point_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: charge_station_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ChargeStationInfoProto
      )()->data);
    size_t size = ros_message->charge_station_info.size;
    auto array_ptr = ros_message->charge_station_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: odd_seg_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, OddSegInfoProto
      )()->data);
    size_t size = ros_message->odd_seg_infos.size;
    auto array_ptr = ros_message->odd_seg_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: plan_channel_id
  {
    const rosidl_runtime_c__String * str = &ros_message->plan_channel_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: offline_req_custom_identity_id
  {
    const rosidl_runtime_c__String * str = &ros_message->offline_req_custom_identity_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: is_valid
  {
    cdr << (ros_message->is_valid ? true : false);
  }

  // Field name: path_id
  {
    cdr << ros_message->path_id;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: strategy
  {
    cdr << ros_message->strategy;
  }

  // Field name: travel_time
  {
    cdr << ros_message->travel_time;
  }

  // Field name: static_travel_time
  {
    cdr << ros_message->static_travel_time;
  }

  // Field name: toll_cost
  {
    cdr << ros_message->toll_cost;
  }

  // Field name: navi_id
  {
    const rosidl_runtime_c__String * str = &ros_message->navi_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: is_online
  {
    cdr << (ros_message->is_online ? true : false);
  }

  // Field name: group_segments
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GroupSegmentProto
      )()->data);
    size_t size = ros_message->group_segments.size;
    auto array_ptr = ros_message->group_segments.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: restriction_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, RestrictionInfoProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->restriction_info, cdr))
    {
      return false;
    }
  }

  // Field name: end_poi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, POIInfoProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->end_poi, cdr))
    {
      return false;
    }
  }

  // Field name: tip
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, TipInfoProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tip, cdr))
    {
      return false;
    }
  }

  // Field name: end_direction
  {
    cdr << ros_message->end_direction;
  }

  // Field name: is_holiday_free
  {
    cdr << (ros_message->is_holiday_free ? true : false);
  }

  // Field name: is_truck_path
  {
    cdr << (ros_message->is_truck_path ? true : false);
  }

  // Field name: data_version
  {
    cdr << ros_message->data_version;
  }

  // Field name: normal_plan_time
  {
    cdr << ros_message->normal_plan_time;
  }

  // Field name: route_type
  {
    cdr << ros_message->route_type;
  }

  // Field name: elec_path_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ElecPathInfoProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->elec_path_info, cdr))
    {
      return false;
    }
  }

  // Field name: path_description_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, PathDescriptionInfoProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path_description_info, cdr))
    {
      return false;
    }
  }

  // Field name: remain_toll_cost
  {
    cdr << ros_message->remain_toll_cost;
  }

  // Field name: main_route_remain_toll_cost
  {
    cdr << ros_message->main_route_remain_toll_cost;
  }

  return true;
}

static bool _AmapPathInfoProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AmapPathInfoProto__ros_msg_type * ros_message = static_cast<_AmapPathInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: all_3d_traffic_lights
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
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

    if (ros_message->all_3d_traffic_lights.data) {
      deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__fini(&ros_message->all_3d_traffic_lights);
    }
    if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(&ros_message->all_3d_traffic_lights, size)) {
      fprintf(stderr, "failed to create array for field 'all_3d_traffic_lights'");
      return false;
    }
    auto array_ptr = ros_message->all_3d_traffic_lights.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: segment_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, SegmentInfoProto
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

    if (ros_message->segment_infos.data) {
      deva_navi_msgs__msg__SegmentInfoProto__Sequence__fini(&ros_message->segment_infos);
    }
    if (!deva_navi_msgs__msg__SegmentInfoProto__Sequence__init(&ros_message->segment_infos, size)) {
      fprintf(stderr, "failed to create array for field 'segment_infos'");
      return false;
    }
    auto array_ptr = ros_message->segment_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: line_icon_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, LineIconPointProto
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

    if (ros_message->line_icon_points.data) {
      deva_navi_msgs__msg__LineIconPointProto__Sequence__fini(&ros_message->line_icon_points);
    }
    if (!deva_navi_msgs__msg__LineIconPointProto__Sequence__init(&ros_message->line_icon_points, size)) {
      fprintf(stderr, "failed to create array for field 'line_icon_points'");
      return false;
    }
    auto array_ptr = ros_message->line_icon_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: city_adcode_list
  {
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

    if (ros_message->city_adcode_list.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->city_adcode_list);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->city_adcode_list, size)) {
      fprintf(stderr, "failed to create array for field 'city_adcode_list'");
      return false;
    }
    auto array_ptr = ros_message->city_adcode_list.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: via_point_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ViaPointInfoProto
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

    if (ros_message->via_point_info.data) {
      deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(&ros_message->via_point_info);
    }
    if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(&ros_message->via_point_info, size)) {
      fprintf(stderr, "failed to create array for field 'via_point_info'");
      return false;
    }
    auto array_ptr = ros_message->via_point_info.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: charge_station_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ChargeStationInfoProto
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

    if (ros_message->charge_station_info.data) {
      deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__fini(&ros_message->charge_station_info);
    }
    if (!deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__init(&ros_message->charge_station_info, size)) {
      fprintf(stderr, "failed to create array for field 'charge_station_info'");
      return false;
    }
    auto array_ptr = ros_message->charge_station_info.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: odd_seg_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, OddSegInfoProto
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

    if (ros_message->odd_seg_infos.data) {
      deva_navi_msgs__msg__OddSegInfoProto__Sequence__fini(&ros_message->odd_seg_infos);
    }
    if (!deva_navi_msgs__msg__OddSegInfoProto__Sequence__init(&ros_message->odd_seg_infos, size)) {
      fprintf(stderr, "failed to create array for field 'odd_seg_infos'");
      return false;
    }
    auto array_ptr = ros_message->odd_seg_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: plan_channel_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->plan_channel_id.data) {
      rosidl_runtime_c__String__init(&ros_message->plan_channel_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->plan_channel_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'plan_channel_id'\n");
      return false;
    }
  }

  // Field name: offline_req_custom_identity_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->offline_req_custom_identity_id.data) {
      rosidl_runtime_c__String__init(&ros_message->offline_req_custom_identity_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->offline_req_custom_identity_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'offline_req_custom_identity_id'\n");
      return false;
    }
  }

  // Field name: is_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid = tmp ? true : false;
  }

  // Field name: path_id
  {
    cdr >> ros_message->path_id;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: strategy
  {
    cdr >> ros_message->strategy;
  }

  // Field name: travel_time
  {
    cdr >> ros_message->travel_time;
  }

  // Field name: static_travel_time
  {
    cdr >> ros_message->static_travel_time;
  }

  // Field name: toll_cost
  {
    cdr >> ros_message->toll_cost;
  }

  // Field name: navi_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->navi_id.data) {
      rosidl_runtime_c__String__init(&ros_message->navi_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->navi_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'navi_id'\n");
      return false;
    }
  }

  // Field name: is_online
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_online = tmp ? true : false;
  }

  // Field name: group_segments
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GroupSegmentProto
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

    if (ros_message->group_segments.data) {
      deva_navi_msgs__msg__GroupSegmentProto__Sequence__fini(&ros_message->group_segments);
    }
    if (!deva_navi_msgs__msg__GroupSegmentProto__Sequence__init(&ros_message->group_segments, size)) {
      fprintf(stderr, "failed to create array for field 'group_segments'");
      return false;
    }
    auto array_ptr = ros_message->group_segments.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: restriction_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, RestrictionInfoProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->restriction_info))
    {
      return false;
    }
  }

  // Field name: end_poi
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, POIInfoProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->end_poi))
    {
      return false;
    }
  }

  // Field name: tip
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, TipInfoProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tip))
    {
      return false;
    }
  }

  // Field name: end_direction
  {
    cdr >> ros_message->end_direction;
  }

  // Field name: is_holiday_free
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_holiday_free = tmp ? true : false;
  }

  // Field name: is_truck_path
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_truck_path = tmp ? true : false;
  }

  // Field name: data_version
  {
    cdr >> ros_message->data_version;
  }

  // Field name: normal_plan_time
  {
    cdr >> ros_message->normal_plan_time;
  }

  // Field name: route_type
  {
    cdr >> ros_message->route_type;
  }

  // Field name: elec_path_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ElecPathInfoProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->elec_path_info))
    {
      return false;
    }
  }

  // Field name: path_description_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, PathDescriptionInfoProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path_description_info))
    {
      return false;
    }
  }

  // Field name: remain_toll_cost
  {
    cdr >> ros_message->remain_toll_cost;
  }

  // Field name: main_route_remain_toll_cost
  {
    cdr >> ros_message->main_route_remain_toll_cost;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__AmapPathInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AmapPathInfoProto__ros_msg_type * ros_message = static_cast<const _AmapPathInfoProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name all_3d_traffic_lights
  {
    size_t array_size = ros_message->all_3d_traffic_lights.size;
    auto array_ptr = ros_message->all_3d_traffic_lights.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name segment_infos
  {
    size_t array_size = ros_message->segment_infos.size;
    auto array_ptr = ros_message->segment_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__SegmentInfoProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name line_icon_points
  {
    size_t array_size = ros_message->line_icon_points.size;
    auto array_ptr = ros_message->line_icon_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__LineIconPointProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name city_adcode_list
  {
    size_t array_size = ros_message->city_adcode_list.size;
    auto array_ptr = ros_message->city_adcode_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name via_point_info
  {
    size_t array_size = ros_message->via_point_info.size;
    auto array_ptr = ros_message->via_point_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__ViaPointInfoProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name charge_station_info
  {
    size_t array_size = ros_message->charge_station_info.size;
    auto array_ptr = ros_message->charge_station_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__ChargeStationInfoProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name odd_seg_infos
  {
    size_t array_size = ros_message->odd_seg_infos.size;
    auto array_ptr = ros_message->odd_seg_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__OddSegInfoProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name plan_channel_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->plan_channel_id.size + 1);
  // field.name offline_req_custom_identity_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->offline_req_custom_identity_id.size + 1);
  // field.name is_valid
  {
    size_t item_size = sizeof(ros_message->is_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_id
  {
    size_t item_size = sizeof(ros_message->path_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name strategy
  {
    size_t item_size = sizeof(ros_message->strategy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name travel_time
  {
    size_t item_size = sizeof(ros_message->travel_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name static_travel_time
  {
    size_t item_size = sizeof(ros_message->static_travel_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name toll_cost
  {
    size_t item_size = sizeof(ros_message->toll_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name navi_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->navi_id.size + 1);
  // field.name is_online
  {
    size_t item_size = sizeof(ros_message->is_online);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name group_segments
  {
    size_t array_size = ros_message->group_segments.size;
    auto array_ptr = ros_message->group_segments.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__GroupSegmentProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name restriction_info

  current_alignment += get_serialized_size_deva_navi_msgs__msg__RestrictionInfoProto(
    &(ros_message->restriction_info), current_alignment);
  // field.name end_poi

  current_alignment += get_serialized_size_deva_navi_msgs__msg__POIInfoProto(
    &(ros_message->end_poi), current_alignment);
  // field.name tip

  current_alignment += get_serialized_size_deva_navi_msgs__msg__TipInfoProto(
    &(ros_message->tip), current_alignment);
  // field.name end_direction
  {
    size_t item_size = sizeof(ros_message->end_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_holiday_free
  {
    size_t item_size = sizeof(ros_message->is_holiday_free);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_truck_path
  {
    size_t item_size = sizeof(ros_message->is_truck_path);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data_version
  {
    size_t item_size = sizeof(ros_message->data_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name normal_plan_time
  {
    size_t item_size = sizeof(ros_message->normal_plan_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name route_type
  {
    size_t item_size = sizeof(ros_message->route_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elec_path_info

  current_alignment += get_serialized_size_deva_navi_msgs__msg__ElecPathInfoProto(
    &(ros_message->elec_path_info), current_alignment);
  // field.name path_description_info

  current_alignment += get_serialized_size_deva_navi_msgs__msg__PathDescriptionInfoProto(
    &(ros_message->path_description_info), current_alignment);
  // field.name remain_toll_cost
  {
    size_t item_size = sizeof(ros_message->remain_toll_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name main_route_remain_toll_cost
  {
    size_t item_size = sizeof(ros_message->main_route_remain_toll_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AmapPathInfoProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__AmapPathInfoProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__AmapPathInfoProto(
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

  // member: all_3d_traffic_lights
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
        max_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: segment_infos
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
        max_serialized_size_deva_navi_msgs__msg__SegmentInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: line_icon_points
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
        max_serialized_size_deva_navi_msgs__msg__LineIconPointProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: city_adcode_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: via_point_info
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
        max_serialized_size_deva_navi_msgs__msg__ViaPointInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: charge_station_info
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
        max_serialized_size_deva_navi_msgs__msg__ChargeStationInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: odd_seg_infos
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
        max_serialized_size_deva_navi_msgs__msg__OddSegInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: plan_channel_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: offline_req_custom_identity_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: is_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: path_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: strategy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: travel_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: static_travel_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: toll_cost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: navi_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: is_online
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: group_segments
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
        max_serialized_size_deva_navi_msgs__msg__GroupSegmentProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: restriction_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__RestrictionInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: end_poi
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__POIInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tip
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__TipInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: end_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_holiday_free
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_truck_path
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: normal_plan_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: route_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elec_path_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__ElecPathInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: path_description_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__PathDescriptionInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: remain_toll_cost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: main_route_remain_toll_cost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_navi_msgs__msg__AmapPathInfoProto;
    is_plain =
      (
      offsetof(DataType, main_route_remain_toll_cost) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AmapPathInfoProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__AmapPathInfoProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AmapPathInfoProto = {
  "deva_navi_msgs::msg",
  "AmapPathInfoProto",
  _AmapPathInfoProto__cdr_serialize,
  _AmapPathInfoProto__cdr_deserialize,
  _AmapPathInfoProto__get_serialized_size,
  _AmapPathInfoProto__max_serialized_size
};

static rosidl_message_type_support_t _AmapPathInfoProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AmapPathInfoProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, AmapPathInfoProto)() {
  return &_AmapPathInfoProto__type_support;
}

#if defined(__cplusplus)
}
#endif

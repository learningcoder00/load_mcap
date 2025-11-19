// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/link_info_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/link_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/link_info_proto__functions.h"
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

#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"  // points
#include "deva_navi_msgs/msg/detail/gantry_info_proto__functions.h"  // gantry_infos
#include "deva_navi_msgs/msg/detail/navi_camera_proto__functions.h"  // cameras
#include "deva_navi_msgs/msg/detail/road_facility_proto__functions.h"  // road_facilities
#include "deva_navi_msgs/msg/detail/turn_info_proto__functions.h"  // turn_infos
#include "rosidl_runtime_c/string.h"  // road_name, service_name
#include "rosidl_runtime_c/string_functions.h"  // road_name, service_name

// forward declare type support functions
size_t get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
size_t get_serialized_size_deva_navi_msgs__msg__GantryInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__GantryInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GantryInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__NaviCameraProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__NaviCameraProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, NaviCameraProto)();
size_t get_serialized_size_deva_navi_msgs__msg__RoadFacilityProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__RoadFacilityProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, RoadFacilityProto)();
size_t get_serialized_size_deva_navi_msgs__msg__TurnInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__TurnInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, TurnInfoProto)();


using _LinkInfoProto__ros_msg_type = deva_navi_msgs__msg__LinkInfoProto;

static bool _LinkInfoProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LinkInfoProto__ros_msg_type * ros_message = static_cast<const _LinkInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
      )()->data);
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: gantry_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GantryInfoProto
      )()->data);
    size_t size = ros_message->gantry_infos.size;
    auto array_ptr = ros_message->gantry_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cameras
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, NaviCameraProto
      )()->data);
    size_t size = ros_message->cameras.size;
    auto array_ptr = ros_message->cameras.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: is_valid
  {
    cdr << (ros_message->is_valid ? true : false);
  }

  // Field name: related_path_id
  {
    cdr << ros_message->related_path_id;
  }

  // Field name: related_segment_index
  {
    cdr << ros_message->related_segment_index;
  }

  // Field name: link_index
  {
    cdr << ros_message->link_index;
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  // Field name: travel_time
  {
    cdr << ros_message->travel_time;
  }

  // Field name: static_travel_time
  {
    cdr << ros_message->static_travel_time;
  }

  // Field name: road_name
  {
    const rosidl_runtime_c__String * str = &ros_message->road_name;
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

  // Field name: road_facilities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, RoadFacilityProto
      )()->data);
    size_t size = ros_message->road_facilities.size;
    auto array_ptr = ros_message->road_facilities.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: topo_id_64
  {
    cdr << ros_message->topo_id_64;
  }

  // Field name: urid
  {
    cdr << ros_message->urid;
  }

  // Field name: link_direction
  {
    cdr << ros_message->link_direction;
  }

  // Field name: main_action
  {
    cdr << ros_message->main_action;
  }

  // Field name: assistant_action
  {
    cdr << ros_message->assistant_action;
  }

  // Field name: adcode
  {
    cdr << ros_message->adcode;
  }

  // Field name: link_type
  {
    cdr << ros_message->link_type;
  }

  // Field name: formway
  {
    cdr << ros_message->formway;
  }

  // Field name: road_class
  {
    cdr << ros_message->road_class;
  }

  // Field name: road_direction
  {
    cdr << ros_message->road_direction;
  }

  // Field name: ownership
  {
    cdr << ros_message->ownership;
  }

  // Field name: is_toll
  {
    cdr << (ros_message->is_toll ? true : false);
  }

  // Field name: is_over_head
  {
    cdr << (ros_message->is_over_head ? true : false);
  }

  // Field name: has_parallel_road
  {
    cdr << (ros_message->has_parallel_road ? true : false);
  }

  // Field name: has_multi_out
  {
    cdr << (ros_message->has_multi_out ? true : false);
  }

  // Field name: has_traffic_light
  {
    cdr << (ros_message->has_traffic_light ? true : false);
  }

  // Field name: has_mix_fork
  {
    cdr << (ros_message->has_mix_fork ? true : false);
  }

  // Field name: is_at_service
  {
    cdr << (ros_message->is_at_service ? true : false);
  }

  // Field name: is_restricting
  {
    cdr << (ros_message->is_restricting ? true : false);
  }

  // Field name: limit_flag
  {
    cdr << ros_message->limit_flag;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: turn_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, TurnInfoProto
      )()->data);
    size_t size = ros_message->turn_infos.size;
    auto array_ptr = ros_message->turn_infos.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: service_name
  {
    const rosidl_runtime_c__String * str = &ros_message->service_name;
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

  // Field name: inner_road
  {
    cdr << (ros_message->inner_road ? true : false);
  }

  // Field name: is_parking_road
  {
    cdr << (ros_message->is_parking_road ? true : false);
  }

  // Field name: traffic_status
  {
    cdr << ros_message->traffic_status;
  }

  return true;
}

static bool _LinkInfoProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LinkInfoProto__ros_msg_type * ros_message = static_cast<_LinkInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: points
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

    if (ros_message->points.data) {
      deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__fini(&ros_message->points);
    }
    if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(&ros_message->points, size)) {
      fprintf(stderr, "failed to create array for field 'points'");
      return false;
    }
    auto array_ptr = ros_message->points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: gantry_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, GantryInfoProto
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

    if (ros_message->gantry_infos.data) {
      deva_navi_msgs__msg__GantryInfoProto__Sequence__fini(&ros_message->gantry_infos);
    }
    if (!deva_navi_msgs__msg__GantryInfoProto__Sequence__init(&ros_message->gantry_infos, size)) {
      fprintf(stderr, "failed to create array for field 'gantry_infos'");
      return false;
    }
    auto array_ptr = ros_message->gantry_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cameras
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, NaviCameraProto
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

    if (ros_message->cameras.data) {
      deva_navi_msgs__msg__NaviCameraProto__Sequence__fini(&ros_message->cameras);
    }
    if (!deva_navi_msgs__msg__NaviCameraProto__Sequence__init(&ros_message->cameras, size)) {
      fprintf(stderr, "failed to create array for field 'cameras'");
      return false;
    }
    auto array_ptr = ros_message->cameras.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: is_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid = tmp ? true : false;
  }

  // Field name: related_path_id
  {
    cdr >> ros_message->related_path_id;
  }

  // Field name: related_segment_index
  {
    cdr >> ros_message->related_segment_index;
  }

  // Field name: link_index
  {
    cdr >> ros_message->link_index;
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  // Field name: travel_time
  {
    cdr >> ros_message->travel_time;
  }

  // Field name: static_travel_time
  {
    cdr >> ros_message->static_travel_time;
  }

  // Field name: road_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->road_name.data) {
      rosidl_runtime_c__String__init(&ros_message->road_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->road_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'road_name'\n");
      return false;
    }
  }

  // Field name: road_facilities
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, RoadFacilityProto
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

    if (ros_message->road_facilities.data) {
      deva_navi_msgs__msg__RoadFacilityProto__Sequence__fini(&ros_message->road_facilities);
    }
    if (!deva_navi_msgs__msg__RoadFacilityProto__Sequence__init(&ros_message->road_facilities, size)) {
      fprintf(stderr, "failed to create array for field 'road_facilities'");
      return false;
    }
    auto array_ptr = ros_message->road_facilities.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: topo_id_64
  {
    cdr >> ros_message->topo_id_64;
  }

  // Field name: urid
  {
    cdr >> ros_message->urid;
  }

  // Field name: link_direction
  {
    cdr >> ros_message->link_direction;
  }

  // Field name: main_action
  {
    cdr >> ros_message->main_action;
  }

  // Field name: assistant_action
  {
    cdr >> ros_message->assistant_action;
  }

  // Field name: adcode
  {
    cdr >> ros_message->adcode;
  }

  // Field name: link_type
  {
    cdr >> ros_message->link_type;
  }

  // Field name: formway
  {
    cdr >> ros_message->formway;
  }

  // Field name: road_class
  {
    cdr >> ros_message->road_class;
  }

  // Field name: road_direction
  {
    cdr >> ros_message->road_direction;
  }

  // Field name: ownership
  {
    cdr >> ros_message->ownership;
  }

  // Field name: is_toll
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_toll = tmp ? true : false;
  }

  // Field name: is_over_head
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_over_head = tmp ? true : false;
  }

  // Field name: has_parallel_road
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_parallel_road = tmp ? true : false;
  }

  // Field name: has_multi_out
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_multi_out = tmp ? true : false;
  }

  // Field name: has_traffic_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_traffic_light = tmp ? true : false;
  }

  // Field name: has_mix_fork
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_mix_fork = tmp ? true : false;
  }

  // Field name: is_at_service
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_at_service = tmp ? true : false;
  }

  // Field name: is_restricting
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_restricting = tmp ? true : false;
  }

  // Field name: limit_flag
  {
    cdr >> ros_message->limit_flag;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: turn_infos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, TurnInfoProto
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

    if (ros_message->turn_infos.data) {
      deva_navi_msgs__msg__TurnInfoProto__Sequence__fini(&ros_message->turn_infos);
    }
    if (!deva_navi_msgs__msg__TurnInfoProto__Sequence__init(&ros_message->turn_infos, size)) {
      fprintf(stderr, "failed to create array for field 'turn_infos'");
      return false;
    }
    auto array_ptr = ros_message->turn_infos.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: service_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->service_name.data) {
      rosidl_runtime_c__String__init(&ros_message->service_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->service_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'service_name'\n");
      return false;
    }
  }

  // Field name: inner_road
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->inner_road = tmp ? true : false;
  }

  // Field name: is_parking_road
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_parking_road = tmp ? true : false;
  }

  // Field name: traffic_status
  {
    cdr >> ros_message->traffic_status;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__LinkInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LinkInfoProto__ros_msg_type * ros_message = static_cast<const _LinkInfoProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name gantry_infos
  {
    size_t array_size = ros_message->gantry_infos.size;
    auto array_ptr = ros_message->gantry_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__GantryInfoProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cameras
  {
    size_t array_size = ros_message->cameras.size;
    auto array_ptr = ros_message->cameras.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__NaviCameraProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name is_valid
  {
    size_t item_size = sizeof(ros_message->is_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name related_path_id
  {
    size_t item_size = sizeof(ros_message->related_path_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name related_segment_index
  {
    size_t item_size = sizeof(ros_message->related_segment_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_index
  {
    size_t item_size = sizeof(ros_message->link_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name length
  {
    size_t item_size = sizeof(ros_message->length);
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
  // field.name road_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->road_name.size + 1);
  // field.name road_facilities
  {
    size_t array_size = ros_message->road_facilities.size;
    auto array_ptr = ros_message->road_facilities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__RoadFacilityProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name topo_id_64
  {
    size_t item_size = sizeof(ros_message->topo_id_64);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name urid
  {
    size_t item_size = sizeof(ros_message->urid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_direction
  {
    size_t item_size = sizeof(ros_message->link_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name main_action
  {
    size_t item_size = sizeof(ros_message->main_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name assistant_action
  {
    size_t item_size = sizeof(ros_message->assistant_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adcode
  {
    size_t item_size = sizeof(ros_message->adcode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name link_type
  {
    size_t item_size = sizeof(ros_message->link_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name formway
  {
    size_t item_size = sizeof(ros_message->formway);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_class
  {
    size_t item_size = sizeof(ros_message->road_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_direction
  {
    size_t item_size = sizeof(ros_message->road_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ownership
  {
    size_t item_size = sizeof(ros_message->ownership);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_toll
  {
    size_t item_size = sizeof(ros_message->is_toll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_over_head
  {
    size_t item_size = sizeof(ros_message->is_over_head);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_parallel_road
  {
    size_t item_size = sizeof(ros_message->has_parallel_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_multi_out
  {
    size_t item_size = sizeof(ros_message->has_multi_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_traffic_light
  {
    size_t item_size = sizeof(ros_message->has_traffic_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_mix_fork
  {
    size_t item_size = sizeof(ros_message->has_mix_fork);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_at_service
  {
    size_t item_size = sizeof(ros_message->is_at_service);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_restricting
  {
    size_t item_size = sizeof(ros_message->is_restricting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name limit_flag
  {
    size_t item_size = sizeof(ros_message->limit_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_infos
  {
    size_t array_size = ros_message->turn_infos.size;
    auto array_ptr = ros_message->turn_infos.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_navi_msgs__msg__TurnInfoProto(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name service_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->service_name.size + 1);
  // field.name inner_road
  {
    size_t item_size = sizeof(ros_message->inner_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_parking_road
  {
    size_t item_size = sizeof(ros_message->is_parking_road);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traffic_status
  {
    size_t item_size = sizeof(ros_message->traffic_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LinkInfoProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__LinkInfoProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__LinkInfoProto(
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

  // member: points
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
  // member: gantry_infos
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
        max_serialized_size_deva_navi_msgs__msg__GantryInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cameras
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
        max_serialized_size_deva_navi_msgs__msg__NaviCameraProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: is_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: related_path_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: related_segment_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
  // member: road_name
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
  // member: road_facilities
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
        max_serialized_size_deva_navi_msgs__msg__RoadFacilityProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: topo_id_64
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: urid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: link_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: main_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: assistant_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: adcode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: link_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: formway
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: road_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: road_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ownership
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_toll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_over_head
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_parallel_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_multi_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_traffic_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_mix_fork
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_at_service
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_restricting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: limit_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: turn_infos
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
        max_serialized_size_deva_navi_msgs__msg__TurnInfoProto(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: service_name
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
  // member: inner_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_parking_road
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: traffic_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_navi_msgs__msg__LinkInfoProto;
    is_plain =
      (
      offsetof(DataType, traffic_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LinkInfoProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__LinkInfoProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LinkInfoProto = {
  "deva_navi_msgs::msg",
  "LinkInfoProto",
  _LinkInfoProto__cdr_serialize,
  _LinkInfoProto__cdr_deserialize,
  _LinkInfoProto__get_serialized_size,
  _LinkInfoProto__max_serialized_size
};

static rosidl_message_type_support_t _LinkInfoProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LinkInfoProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, LinkInfoProto)() {
  return &_LinkInfoProto__type_support;
}

#if defined(__cplusplus)
}
#endif

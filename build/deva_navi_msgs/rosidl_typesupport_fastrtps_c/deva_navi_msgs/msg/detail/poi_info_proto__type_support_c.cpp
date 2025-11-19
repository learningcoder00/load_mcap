// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_navi_msgs:msg/POIInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/poi_info_proto__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_navi_msgs/msg/detail/poi_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/poi_info_proto__functions.h"
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

#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__functions.h"  // charge_info
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"  // navi_pos, real_pos
#include "rosidl_runtime_c/primitives_sequence.h"  // points
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // points
#include "rosidl_runtime_c/string.h"  // angel, extend_info_flag, floor_name, name, parent_id, parent_name, parent_rel, parent_simple_name, poi_id, src_app, type_code
#include "rosidl_runtime_c/string_functions.h"  // angel, extend_info_flag, floor_name, name, parent_id, parent_name, parent_rel, parent_simple_name, poi_id, src_app, type_code

// forward declare type support functions
size_t get_serialized_size_deva_navi_msgs__msg__ChargingArgumentsInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__ChargingArgumentsInfoProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ChargingArgumentsInfoProto)();
size_t get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto)();


using _POIInfoProto__ros_msg_type = deva_navi_msgs__msg__POIInfoProto;

static bool _POIInfoProto__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _POIInfoProto__ros_msg_type * ros_message = static_cast<const _POIInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: real_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->real_pos, cdr))
    {
      return false;
    }
  }

  // Field name: navi_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->navi_pos, cdr))
    {
      return false;
    }
  }

  // Field name: sigshelter
  {
    cdr << ros_message->sigshelter;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: road_id
  {
    cdr << ros_message->road_id;
  }

  // Field name: poi_id
  {
    const rosidl_runtime_c__String * str = &ros_message->poi_id;
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

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: floor_name
  {
    const rosidl_runtime_c__String * str = &ros_message->floor_name;
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

  // Field name: parent_name
  {
    const rosidl_runtime_c__String * str = &ros_message->parent_name;
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

  // Field name: parent_simple_name
  {
    const rosidl_runtime_c__String * str = &ros_message->parent_simple_name;
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

  // Field name: angel
  {
    const rosidl_runtime_c__String * str = &ros_message->angel;
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

  // Field name: points
  {
    size_t size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: parent_id
  {
    const rosidl_runtime_c__String * str = &ros_message->parent_id;
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

  // Field name: parent_rel
  {
    const rosidl_runtime_c__String * str = &ros_message->parent_rel;
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

  // Field name: type_code
  {
    const rosidl_runtime_c__String * str = &ros_message->type_code;
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

  // Field name: from_jump
  {
    cdr << ros_message->from_jump;
  }

  // Field name: overhead
  {
    cdr << ros_message->overhead;
  }

  // Field name: point_cnt
  {
    cdr << ros_message->point_cnt;
  }

  // Field name: check_point_link_id
  {
    cdr << ros_message->check_point_link_id;
  }

  // Field name: overhead_back_alt_diff
  {
    cdr << ros_message->overhead_back_alt_diff;
  }

  // Field name: floor
  {
    cdr << ros_message->floor;
  }

  // Field name: extend_info_flag
  {
    const rosidl_runtime_c__String * str = &ros_message->extend_info_flag;
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

  // Field name: src_app
  {
    const rosidl_runtime_c__String * str = &ros_message->src_app;
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

  // Field name: charge_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ChargingArgumentsInfoProto
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->charge_info, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _POIInfoProto__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _POIInfoProto__ros_msg_type * ros_message = static_cast<_POIInfoProto__ros_msg_type *>(untyped_ros_message);
  // Field name: real_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->real_pos))
    {
      return false;
    }
  }

  // Field name: navi_pos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, Coord3DDoubleProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->navi_pos))
    {
      return false;
    }
  }

  // Field name: sigshelter
  {
    cdr >> ros_message->sigshelter;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: road_id
  {
    cdr >> ros_message->road_id;
  }

  // Field name: poi_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->poi_id.data) {
      rosidl_runtime_c__String__init(&ros_message->poi_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->poi_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'poi_id'\n");
      return false;
    }
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: floor_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->floor_name.data) {
      rosidl_runtime_c__String__init(&ros_message->floor_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->floor_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'floor_name'\n");
      return false;
    }
  }

  // Field name: parent_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->parent_name.data) {
      rosidl_runtime_c__String__init(&ros_message->parent_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->parent_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'parent_name'\n");
      return false;
    }
  }

  // Field name: parent_simple_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->parent_simple_name.data) {
      rosidl_runtime_c__String__init(&ros_message->parent_simple_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->parent_simple_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'parent_simple_name'\n");
      return false;
    }
  }

  // Field name: angel
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->angel.data) {
      rosidl_runtime_c__String__init(&ros_message->angel);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->angel,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'angel'\n");
      return false;
    }
  }

  // Field name: points
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

    if (ros_message->points.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->points);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->points, size)) {
      fprintf(stderr, "failed to create array for field 'points'");
      return false;
    }
    auto array_ptr = ros_message->points.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: parent_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->parent_id.data) {
      rosidl_runtime_c__String__init(&ros_message->parent_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->parent_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'parent_id'\n");
      return false;
    }
  }

  // Field name: parent_rel
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->parent_rel.data) {
      rosidl_runtime_c__String__init(&ros_message->parent_rel);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->parent_rel,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'parent_rel'\n");
      return false;
    }
  }

  // Field name: type_code
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type_code.data) {
      rosidl_runtime_c__String__init(&ros_message->type_code);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type_code,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type_code'\n");
      return false;
    }
  }

  // Field name: from_jump
  {
    cdr >> ros_message->from_jump;
  }

  // Field name: overhead
  {
    cdr >> ros_message->overhead;
  }

  // Field name: point_cnt
  {
    cdr >> ros_message->point_cnt;
  }

  // Field name: check_point_link_id
  {
    cdr >> ros_message->check_point_link_id;
  }

  // Field name: overhead_back_alt_diff
  {
    cdr >> ros_message->overhead_back_alt_diff;
  }

  // Field name: floor
  {
    cdr >> ros_message->floor;
  }

  // Field name: extend_info_flag
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->extend_info_flag.data) {
      rosidl_runtime_c__String__init(&ros_message->extend_info_flag);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->extend_info_flag,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'extend_info_flag'\n");
      return false;
    }
  }

  // Field name: src_app
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->src_app.data) {
      rosidl_runtime_c__String__init(&ros_message->src_app);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->src_app,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'src_app'\n");
      return false;
    }
  }

  // Field name: charge_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, ChargingArgumentsInfoProto
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->charge_info))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t get_serialized_size_deva_navi_msgs__msg__POIInfoProto(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _POIInfoProto__ros_msg_type * ros_message = static_cast<const _POIInfoProto__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name real_pos

  current_alignment += get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
    &(ros_message->real_pos), current_alignment);
  // field.name navi_pos

  current_alignment += get_serialized_size_deva_navi_msgs__msg__Coord3DDoubleProto(
    &(ros_message->navi_pos), current_alignment);
  // field.name sigshelter
  {
    size_t item_size = sizeof(ros_message->sigshelter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_id
  {
    size_t item_size = sizeof(ros_message->road_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poi_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->poi_id.size + 1);
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name floor_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->floor_name.size + 1);
  // field.name parent_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->parent_name.size + 1);
  // field.name parent_simple_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->parent_simple_name.size + 1);
  // field.name angel
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->angel.size + 1);
  // field.name points
  {
    size_t array_size = ros_message->points.size;
    auto array_ptr = ros_message->points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parent_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->parent_id.size + 1);
  // field.name parent_rel
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->parent_rel.size + 1);
  // field.name type_code
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_code.size + 1);
  // field.name from_jump
  {
    size_t item_size = sizeof(ros_message->from_jump);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overhead
  {
    size_t item_size = sizeof(ros_message->overhead);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name point_cnt
  {
    size_t item_size = sizeof(ros_message->point_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_point_link_id
  {
    size_t item_size = sizeof(ros_message->check_point_link_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overhead_back_alt_diff
  {
    size_t item_size = sizeof(ros_message->overhead_back_alt_diff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name floor
  {
    size_t item_size = sizeof(ros_message->floor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extend_info_flag
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->extend_info_flag.size + 1);
  // field.name src_app
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->src_app.size + 1);
  // field.name charge_info

  current_alignment += get_serialized_size_deva_navi_msgs__msg__ChargingArgumentsInfoProto(
    &(ros_message->charge_info), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _POIInfoProto__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_navi_msgs__msg__POIInfoProto(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_navi_msgs
size_t max_serialized_size_deva_navi_msgs__msg__POIInfoProto(
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

  // member: real_pos
  {
    size_t array_size = 1;


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
  // member: navi_pos
  {
    size_t array_size = 1;


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
  // member: sigshelter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: road_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: poi_id
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
  // member: name
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
  // member: floor_name
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
  // member: parent_name
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
  // member: parent_simple_name
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
  // member: angel
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
  // member: points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: parent_id
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
  // member: parent_rel
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
  // member: type_code
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
  // member: from_jump
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: overhead
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: point_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: check_point_link_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: overhead_back_alt_diff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: floor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extend_info_flag
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
  // member: src_app
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
  // member: charge_info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_navi_msgs__msg__ChargingArgumentsInfoProto(
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
    using DataType = deva_navi_msgs__msg__POIInfoProto;
    is_plain =
      (
      offsetof(DataType, charge_info) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _POIInfoProto__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_navi_msgs__msg__POIInfoProto(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_POIInfoProto = {
  "deva_navi_msgs::msg",
  "POIInfoProto",
  _POIInfoProto__cdr_serialize,
  _POIInfoProto__cdr_deserialize,
  _POIInfoProto__get_serialized_size,
  _POIInfoProto__max_serialized_size
};

static rosidl_message_type_support_t _POIInfoProto__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_POIInfoProto,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_navi_msgs, msg, POIInfoProto)() {
  return &_POIInfoProto__type_support;
}

#if defined(__cplusplus)
}
#endif

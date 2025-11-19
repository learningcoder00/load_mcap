// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_perception_msgs:msg/VirtualCamInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/virtual_cam_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_perception_msgs/msg/detail/virtual_cam_info__struct.h"
#include "deva_perception_msgs/msg/detail/virtual_cam_info__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // crops, input_size, mapx, mapy, ori_extrinsic, ori_intrinsic, pinhole_intrinsic, resolution, vir_extrinsic, vir_intrinsic
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // crops, input_size, mapx, mapy, ori_extrinsic, ori_intrinsic, pinhole_intrinsic, resolution, vir_extrinsic, vir_intrinsic
#include "rosidl_runtime_c/string.h"  // cam_name, distort_model
#include "rosidl_runtime_c/string_functions.h"  // cam_name, distort_model

// forward declare type support functions


using _VirtualCamInfo__ros_msg_type = deva_perception_msgs__msg__VirtualCamInfo;

static bool _VirtualCamInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VirtualCamInfo__ros_msg_type * ros_message = static_cast<const _VirtualCamInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: cam_name
  {
    const rosidl_runtime_c__String * str = &ros_message->cam_name;
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

  // Field name: resolution
  {
    size_t size = ros_message->resolution.size;
    auto array_ptr = ros_message->resolution.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: distort_model
  {
    const rosidl_runtime_c__String * str = &ros_message->distort_model;
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

  // Field name: ori_intrinsic
  {
    size_t size = ros_message->ori_intrinsic.size;
    auto array_ptr = ros_message->ori_intrinsic.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vir_intrinsic
  {
    size_t size = ros_message->vir_intrinsic.size;
    auto array_ptr = ros_message->vir_intrinsic.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ori_extrinsic
  {
    size_t size = ros_message->ori_extrinsic.size;
    auto array_ptr = ros_message->ori_extrinsic.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vir_extrinsic
  {
    size_t size = ros_message->vir_extrinsic.size;
    auto array_ptr = ros_message->vir_extrinsic.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mapx
  {
    size_t size = ros_message->mapx.size;
    auto array_ptr = ros_message->mapx.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mapy
  {
    size_t size = ros_message->mapy.size;
    auto array_ptr = ros_message->mapy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pinhole_intrinsic
  {
    size_t size = ros_message->pinhole_intrinsic.size;
    auto array_ptr = ros_message->pinhole_intrinsic.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: crops
  {
    size_t size = ros_message->crops.size;
    auto array_ptr = ros_message->crops.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: input_size
  {
    size_t size = ros_message->input_size.size;
    auto array_ptr = ros_message->input_size.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _VirtualCamInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VirtualCamInfo__ros_msg_type * ros_message = static_cast<_VirtualCamInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: cam_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cam_name.data) {
      rosidl_runtime_c__String__init(&ros_message->cam_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cam_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cam_name'\n");
      return false;
    }
  }

  // Field name: resolution
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

    if (ros_message->resolution.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->resolution);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->resolution, size)) {
      fprintf(stderr, "failed to create array for field 'resolution'");
      return false;
    }
    auto array_ptr = ros_message->resolution.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: distort_model
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->distort_model.data) {
      rosidl_runtime_c__String__init(&ros_message->distort_model);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->distort_model,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'distort_model'\n");
      return false;
    }
  }

  // Field name: ori_intrinsic
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

    if (ros_message->ori_intrinsic.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ori_intrinsic);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ori_intrinsic, size)) {
      fprintf(stderr, "failed to create array for field 'ori_intrinsic'");
      return false;
    }
    auto array_ptr = ros_message->ori_intrinsic.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vir_intrinsic
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

    if (ros_message->vir_intrinsic.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->vir_intrinsic);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->vir_intrinsic, size)) {
      fprintf(stderr, "failed to create array for field 'vir_intrinsic'");
      return false;
    }
    auto array_ptr = ros_message->vir_intrinsic.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ori_extrinsic
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

    if (ros_message->ori_extrinsic.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->ori_extrinsic);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->ori_extrinsic, size)) {
      fprintf(stderr, "failed to create array for field 'ori_extrinsic'");
      return false;
    }
    auto array_ptr = ros_message->ori_extrinsic.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vir_extrinsic
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

    if (ros_message->vir_extrinsic.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->vir_extrinsic);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->vir_extrinsic, size)) {
      fprintf(stderr, "failed to create array for field 'vir_extrinsic'");
      return false;
    }
    auto array_ptr = ros_message->vir_extrinsic.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mapx
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

    if (ros_message->mapx.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->mapx);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->mapx, size)) {
      fprintf(stderr, "failed to create array for field 'mapx'");
      return false;
    }
    auto array_ptr = ros_message->mapx.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mapy
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

    if (ros_message->mapy.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->mapy);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->mapy, size)) {
      fprintf(stderr, "failed to create array for field 'mapy'");
      return false;
    }
    auto array_ptr = ros_message->mapy.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pinhole_intrinsic
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

    if (ros_message->pinhole_intrinsic.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->pinhole_intrinsic);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->pinhole_intrinsic, size)) {
      fprintf(stderr, "failed to create array for field 'pinhole_intrinsic'");
      return false;
    }
    auto array_ptr = ros_message->pinhole_intrinsic.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: crops
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

    if (ros_message->crops.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->crops);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->crops, size)) {
      fprintf(stderr, "failed to create array for field 'crops'");
      return false;
    }
    auto array_ptr = ros_message->crops.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: input_size
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

    if (ros_message->input_size.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->input_size);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->input_size, size)) {
      fprintf(stderr, "failed to create array for field 'input_size'");
      return false;
    }
    auto array_ptr = ros_message->input_size.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t get_serialized_size_deva_perception_msgs__msg__VirtualCamInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VirtualCamInfo__ros_msg_type * ros_message = static_cast<const _VirtualCamInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cam_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cam_name.size + 1);
  // field.name resolution
  {
    size_t array_size = ros_message->resolution.size;
    auto array_ptr = ros_message->resolution.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distort_model
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->distort_model.size + 1);
  // field.name ori_intrinsic
  {
    size_t array_size = ros_message->ori_intrinsic.size;
    auto array_ptr = ros_message->ori_intrinsic.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vir_intrinsic
  {
    size_t array_size = ros_message->vir_intrinsic.size;
    auto array_ptr = ros_message->vir_intrinsic.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ori_extrinsic
  {
    size_t array_size = ros_message->ori_extrinsic.size;
    auto array_ptr = ros_message->ori_extrinsic.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vir_extrinsic
  {
    size_t array_size = ros_message->vir_extrinsic.size;
    auto array_ptr = ros_message->vir_extrinsic.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mapx
  {
    size_t array_size = ros_message->mapx.size;
    auto array_ptr = ros_message->mapx.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mapy
  {
    size_t array_size = ros_message->mapy.size;
    auto array_ptr = ros_message->mapy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pinhole_intrinsic
  {
    size_t array_size = ros_message->pinhole_intrinsic.size;
    auto array_ptr = ros_message->pinhole_intrinsic.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crops
  {
    size_t array_size = ros_message->crops.size;
    auto array_ptr = ros_message->crops.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_size
  {
    size_t array_size = ros_message->input_size.size;
    auto array_ptr = ros_message->input_size.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VirtualCamInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_perception_msgs__msg__VirtualCamInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_perception_msgs
size_t max_serialized_size_deva_perception_msgs__msg__VirtualCamInfo(
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

  // member: cam_name
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
  // member: resolution
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
  // member: distort_model
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
  // member: ori_intrinsic
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
  // member: vir_intrinsic
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
  // member: ori_extrinsic
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
  // member: vir_extrinsic
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
  // member: mapx
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
  // member: mapy
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
  // member: pinhole_intrinsic
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
  // member: crops
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
  // member: input_size
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_perception_msgs__msg__VirtualCamInfo;
    is_plain =
      (
      offsetof(DataType, input_size) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VirtualCamInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_perception_msgs__msg__VirtualCamInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VirtualCamInfo = {
  "deva_perception_msgs::msg",
  "VirtualCamInfo",
  _VirtualCamInfo__cdr_serialize,
  _VirtualCamInfo__cdr_deserialize,
  _VirtualCamInfo__get_serialized_size,
  _VirtualCamInfo__max_serialized_size
};

static rosidl_message_type_support_t _VirtualCamInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VirtualCamInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_perception_msgs, msg, VirtualCamInfo)() {
  return &_VirtualCamInfo__type_support;
}

#if defined(__cplusplus)
}
#endif

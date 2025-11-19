// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/structured_link__rosidl_typesupport_fastrtps_cpp.hpp"
#include "environment_model_msgs/msg/detail/structured_link__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::FeatureIDType &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::FeatureIDType &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::FeatureIDType &,
  size_t current_alignment);
size_t
max_serialized_size_FeatureIDType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs

namespace environment_model_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const environment_model_msgs::msg::Vec3d &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  environment_model_msgs::msg::Vec3d &);
size_t get_serialized_size(
  const environment_model_msgs::msg::Vec3d &,
  size_t current_alignment);
size_t
max_serialized_size_Vec3d(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace environment_model_msgs

namespace deva_gaode_routing_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_gaode_routing_msgs::msg::Guidance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_gaode_routing_msgs::msg::Guidance &);
size_t get_serialized_size(
  const deva_gaode_routing_msgs::msg::Guidance &,
  size_t current_alignment);
size_t
max_serialized_size_Guidance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_gaode_routing_msgs


namespace environment_model_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
cdr_serialize(
  const environment_model_msgs::msg::StructuredLink & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: prev_ids
  {
    cdr << ros_message.prev_ids;
  }
  // Member: succ_ids
  {
    cdr << ros_message.succ_ids;
  }
  // Member: feature_point_ids
  {
    size_t size = ros_message.feature_point_ids.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.feature_point_ids[i],
        cdr);
    }
  }
  // Member: points
  {
    size_t size = ros_message.points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.points[i],
        cdr);
    }
  }
  // Member: direction
  cdr << ros_message.direction;
  // Member: length
  cdr << ros_message.length;
  // Member: speed_limit_s2e
  cdr << ros_message.speed_limit_s2e;
  // Member: speed_limit_e2s
  cdr << ros_message.speed_limit_e2s;
  // Member: coverage_status
  cdr << ros_message.coverage_status;
  // Member: lane_num
  cdr << ros_message.lane_num;
  // Member: lane_num_s2e
  cdr << ros_message.lane_num_s2e;
  // Member: lane_num_e2s
  cdr << ros_message.lane_num_e2s;
  // Member: relationship_with_junction
  cdr << ros_message.relationship_with_junction;
  // Member: guidances
  {
    size_t size = ros_message.guidances.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.guidances[i],
        cdr);
    }
  }
  // Member: is_on_routing
  cdr << (ros_message.is_on_routing ? true : false);
  // Member: need_revert
  cdr << (ros_message.need_revert ? true : false);
  // Member: link_kinds
  {
    cdr << ros_message.link_kinds;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  environment_model_msgs::msg::StructuredLink & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: prev_ids
  {
    cdr >> ros_message.prev_ids;
  }

  // Member: succ_ids
  {
    cdr >> ros_message.succ_ids;
  }

  // Member: feature_point_ids
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

    ros_message.feature_point_ids.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.feature_point_ids[i]);
    }
  }

  // Member: points
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

    ros_message.points.resize(size);
    for (size_t i = 0; i < size; i++) {
      environment_model_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.points[i]);
    }
  }

  // Member: direction
  cdr >> ros_message.direction;

  // Member: length
  cdr >> ros_message.length;

  // Member: speed_limit_s2e
  cdr >> ros_message.speed_limit_s2e;

  // Member: speed_limit_e2s
  cdr >> ros_message.speed_limit_e2s;

  // Member: coverage_status
  cdr >> ros_message.coverage_status;

  // Member: lane_num
  cdr >> ros_message.lane_num;

  // Member: lane_num_s2e
  cdr >> ros_message.lane_num_s2e;

  // Member: lane_num_e2s
  cdr >> ros_message.lane_num_e2s;

  // Member: relationship_with_junction
  cdr >> ros_message.relationship_with_junction;

  // Member: guidances
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

    ros_message.guidances.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.guidances[i]);
    }
  }

  // Member: is_on_routing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_on_routing = tmp ? true : false;
  }

  // Member: need_revert
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.need_revert = tmp ? true : false;
  }

  // Member: link_kinds
  {
    cdr >> ros_message.link_kinds;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
get_serialized_size(
  const environment_model_msgs::msg::StructuredLink & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prev_ids
  {
    size_t array_size = ros_message.prev_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.prev_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: succ_ids
  {
    size_t array_size = ros_message.succ_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.succ_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: feature_point_ids
  {
    size_t array_size = ros_message.feature_point_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.feature_point_ids[index], current_alignment);
    }
  }
  // Member: points
  {
    size_t array_size = ros_message.points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        environment_model_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.points[index], current_alignment);
    }
  }
  // Member: direction
  {
    size_t item_size = sizeof(ros_message.direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit_s2e
  {
    size_t item_size = sizeof(ros_message.speed_limit_s2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_limit_e2s
  {
    size_t item_size = sizeof(ros_message.speed_limit_e2s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coverage_status
  {
    size_t item_size = sizeof(ros_message.coverage_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_num
  {
    size_t item_size = sizeof(ros_message.lane_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_num_s2e
  {
    size_t item_size = sizeof(ros_message.lane_num_s2e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_num_e2s
  {
    size_t item_size = sizeof(ros_message.lane_num_e2s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: relationship_with_junction
  {
    size_t item_size = sizeof(ros_message.relationship_with_junction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: guidances
  {
    size_t array_size = ros_message.guidances.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.guidances[index], current_alignment);
    }
  }
  // Member: is_on_routing
  {
    size_t item_size = sizeof(ros_message.is_on_routing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: need_revert
  {
    size_t item_size = sizeof(ros_message.need_revert);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: link_kinds
  {
    size_t array_size = ros_message.link_kinds.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.link_kinds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_environment_model_msgs
max_serialized_size_StructuredLink(
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


  // Member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: prev_ids
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

  // Member: succ_ids
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

  // Member: feature_point_ids
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
      size_t inner_size =
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_FeatureIDType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: points
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
      size_t inner_size =
        environment_model_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vec3d(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_limit_s2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_limit_e2s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: coverage_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lane_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_num_s2e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_num_e2s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: relationship_with_junction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: guidances
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
      size_t inner_size =
        deva_gaode_routing_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Guidance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_on_routing
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: need_revert
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: link_kinds
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = environment_model_msgs::msg::StructuredLink;
    is_plain =
      (
      offsetof(DataType, link_kinds) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StructuredLink__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const environment_model_msgs::msg::StructuredLink *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StructuredLink__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<environment_model_msgs::msg::StructuredLink *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StructuredLink__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const environment_model_msgs::msg::StructuredLink *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StructuredLink__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StructuredLink(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StructuredLink__callbacks = {
  "environment_model_msgs::msg",
  "StructuredLink",
  _StructuredLink__cdr_serialize,
  _StructuredLink__cdr_deserialize,
  _StructuredLink__get_serialized_size,
  _StructuredLink__max_serialized_size
};

static rosidl_message_type_support_t _StructuredLink__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StructuredLink__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace environment_model_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<environment_model_msgs::msg::StructuredLink>()
{
  return &environment_model_msgs::msg::typesupport_fastrtps_cpp::_StructuredLink__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, environment_model_msgs, msg, StructuredLink)() {
  return &environment_model_msgs::msg::typesupport_fastrtps_cpp::_StructuredLink__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs:msg/PlanningLog.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/planning_log__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs/msg/detail/planning_log__struct.h"
#include "deva_planning_msgs/msg/detail/planning_log__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // apollo_decision, chassis, localization, megmap_proto, navigator_routing, pad_message, planning_log, prediction, pull_over_msg, speed_solver_debug_sequence, state_context, target_trajectory, traffic_poles, trajectory_solver_debug_sequence
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // apollo_decision, chassis, localization, megmap_proto, navigator_routing, pad_message, planning_log, prediction, pull_over_msg, speed_solver_debug_sequence, state_context, target_trajectory, traffic_poles, trajectory_solver_debug_sequence
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PlanningLog__ros_msg_type = deva_planning_msgs__msg__PlanningLog;

static bool _PlanningLog__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanningLog__ros_msg_type * ros_message = static_cast<const _PlanningLog__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: localization
  {
    size_t size = ros_message->localization.size;
    auto array_ptr = ros_message->localization.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: chassis
  {
    size_t size = ros_message->chassis.size;
    auto array_ptr = ros_message->chassis.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pad_message
  {
    size_t size = ros_message->pad_message.size;
    auto array_ptr = ros_message->pad_message.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pull_over_msg
  {
    size_t size = ros_message->pull_over_msg.size;
    auto array_ptr = ros_message->pull_over_msg.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: traffic_poles
  {
    size_t size = ros_message->traffic_poles.size;
    auto array_ptr = ros_message->traffic_poles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: apollo_decision
  {
    size_t size = ros_message->apollo_decision.size;
    auto array_ptr = ros_message->apollo_decision.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: prediction
  {
    size_t size = ros_message->prediction.size;
    auto array_ptr = ros_message->prediction.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: megmap_proto
  {
    size_t size = ros_message->megmap_proto.size;
    auto array_ptr = ros_message->megmap_proto.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: state_context
  {
    size_t size = ros_message->state_context.size;
    auto array_ptr = ros_message->state_context.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_trajectory
  {
    size_t size = ros_message->target_trajectory.size;
    auto array_ptr = ros_message->target_trajectory.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: speed_solver_debug_sequence
  {
    size_t size = ros_message->speed_solver_debug_sequence.size;
    auto array_ptr = ros_message->speed_solver_debug_sequence.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: trajectory_solver_debug_sequence
  {
    size_t size = ros_message->trajectory_solver_debug_sequence.size;
    auto array_ptr = ros_message->trajectory_solver_debug_sequence.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: planning_log
  {
    size_t size = ros_message->planning_log.size;
    auto array_ptr = ros_message->planning_log.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: navigator_routing
  {
    size_t size = ros_message->navigator_routing.size;
    auto array_ptr = ros_message->navigator_routing.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: drving_state
  {
    cdr << ros_message->drving_state;
  }

  // Field name: auto_function
  {
    cdr << ros_message->auto_function;
  }

  // Field name: drive_action
  {
    cdr << ros_message->drive_action;
  }

  // Field name: env_info_index
  {
    cdr << ros_message->env_info_index;
  }

  return true;
}

static bool _PlanningLog__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanningLog__ros_msg_type * ros_message = static_cast<_PlanningLog__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: localization
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

    if (ros_message->localization.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->localization);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->localization, size)) {
      fprintf(stderr, "failed to create array for field 'localization'");
      return false;
    }
    auto array_ptr = ros_message->localization.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: chassis
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

    if (ros_message->chassis.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->chassis);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->chassis, size)) {
      fprintf(stderr, "failed to create array for field 'chassis'");
      return false;
    }
    auto array_ptr = ros_message->chassis.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pad_message
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

    if (ros_message->pad_message.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->pad_message);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->pad_message, size)) {
      fprintf(stderr, "failed to create array for field 'pad_message'");
      return false;
    }
    auto array_ptr = ros_message->pad_message.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pull_over_msg
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

    if (ros_message->pull_over_msg.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->pull_over_msg);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->pull_over_msg, size)) {
      fprintf(stderr, "failed to create array for field 'pull_over_msg'");
      return false;
    }
    auto array_ptr = ros_message->pull_over_msg.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: traffic_poles
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

    if (ros_message->traffic_poles.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->traffic_poles);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->traffic_poles, size)) {
      fprintf(stderr, "failed to create array for field 'traffic_poles'");
      return false;
    }
    auto array_ptr = ros_message->traffic_poles.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: apollo_decision
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

    if (ros_message->apollo_decision.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->apollo_decision);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->apollo_decision, size)) {
      fprintf(stderr, "failed to create array for field 'apollo_decision'");
      return false;
    }
    auto array_ptr = ros_message->apollo_decision.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: prediction
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

    if (ros_message->prediction.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->prediction);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->prediction, size)) {
      fprintf(stderr, "failed to create array for field 'prediction'");
      return false;
    }
    auto array_ptr = ros_message->prediction.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: megmap_proto
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

    if (ros_message->megmap_proto.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->megmap_proto);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->megmap_proto, size)) {
      fprintf(stderr, "failed to create array for field 'megmap_proto'");
      return false;
    }
    auto array_ptr = ros_message->megmap_proto.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: state_context
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

    if (ros_message->state_context.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->state_context);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->state_context, size)) {
      fprintf(stderr, "failed to create array for field 'state_context'");
      return false;
    }
    auto array_ptr = ros_message->state_context.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_trajectory
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

    if (ros_message->target_trajectory.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->target_trajectory);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->target_trajectory, size)) {
      fprintf(stderr, "failed to create array for field 'target_trajectory'");
      return false;
    }
    auto array_ptr = ros_message->target_trajectory.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: speed_solver_debug_sequence
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

    if (ros_message->speed_solver_debug_sequence.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->speed_solver_debug_sequence);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->speed_solver_debug_sequence, size)) {
      fprintf(stderr, "failed to create array for field 'speed_solver_debug_sequence'");
      return false;
    }
    auto array_ptr = ros_message->speed_solver_debug_sequence.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: trajectory_solver_debug_sequence
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

    if (ros_message->trajectory_solver_debug_sequence.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->trajectory_solver_debug_sequence);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->trajectory_solver_debug_sequence, size)) {
      fprintf(stderr, "failed to create array for field 'trajectory_solver_debug_sequence'");
      return false;
    }
    auto array_ptr = ros_message->trajectory_solver_debug_sequence.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: planning_log
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

    if (ros_message->planning_log.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->planning_log);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->planning_log, size)) {
      fprintf(stderr, "failed to create array for field 'planning_log'");
      return false;
    }
    auto array_ptr = ros_message->planning_log.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: navigator_routing
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

    if (ros_message->navigator_routing.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->navigator_routing);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->navigator_routing, size)) {
      fprintf(stderr, "failed to create array for field 'navigator_routing'");
      return false;
    }
    auto array_ptr = ros_message->navigator_routing.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: drving_state
  {
    cdr >> ros_message->drving_state;
  }

  // Field name: auto_function
  {
    cdr >> ros_message->auto_function;
  }

  // Field name: drive_action
  {
    cdr >> ros_message->drive_action;
  }

  // Field name: env_info_index
  {
    cdr >> ros_message->env_info_index;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs
size_t get_serialized_size_deva_planning_msgs__msg__PlanningLog(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningLog__ros_msg_type * ros_message = static_cast<const _PlanningLog__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name localization
  {
    size_t array_size = ros_message->localization.size;
    auto array_ptr = ros_message->localization.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chassis
  {
    size_t array_size = ros_message->chassis.size;
    auto array_ptr = ros_message->chassis.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pad_message
  {
    size_t array_size = ros_message->pad_message.size;
    auto array_ptr = ros_message->pad_message.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pull_over_msg
  {
    size_t array_size = ros_message->pull_over_msg.size;
    auto array_ptr = ros_message->pull_over_msg.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name traffic_poles
  {
    size_t array_size = ros_message->traffic_poles.size;
    auto array_ptr = ros_message->traffic_poles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name apollo_decision
  {
    size_t array_size = ros_message->apollo_decision.size;
    auto array_ptr = ros_message->apollo_decision.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prediction
  {
    size_t array_size = ros_message->prediction.size;
    auto array_ptr = ros_message->prediction.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name megmap_proto
  {
    size_t array_size = ros_message->megmap_proto.size;
    auto array_ptr = ros_message->megmap_proto.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state_context
  {
    size_t array_size = ros_message->state_context.size;
    auto array_ptr = ros_message->state_context.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_trajectory
  {
    size_t array_size = ros_message->target_trajectory.size;
    auto array_ptr = ros_message->target_trajectory.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_solver_debug_sequence
  {
    size_t array_size = ros_message->speed_solver_debug_sequence.size;
    auto array_ptr = ros_message->speed_solver_debug_sequence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_solver_debug_sequence
  {
    size_t array_size = ros_message->trajectory_solver_debug_sequence.size;
    auto array_ptr = ros_message->trajectory_solver_debug_sequence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name planning_log
  {
    size_t array_size = ros_message->planning_log.size;
    auto array_ptr = ros_message->planning_log.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name navigator_routing
  {
    size_t array_size = ros_message->navigator_routing.size;
    auto array_ptr = ros_message->navigator_routing.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drving_state
  {
    size_t item_size = sizeof(ros_message->drving_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_function
  {
    size_t item_size = sizeof(ros_message->auto_function);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drive_action
  {
    size_t item_size = sizeof(ros_message->drive_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name env_info_index
  {
    size_t item_size = sizeof(ros_message->env_info_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanningLog__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs__msg__PlanningLog(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs
size_t max_serialized_size_deva_planning_msgs__msg__PlanningLog(
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
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: localization
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: chassis
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pad_message
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pull_over_msg
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: traffic_poles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: apollo_decision
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prediction
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: megmap_proto
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: state_context
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_trajectory
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_solver_debug_sequence
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trajectory_solver_debug_sequence
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: planning_log
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: navigator_routing
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drving_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: auto_function
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drive_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: env_info_index
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
    using DataType = deva_planning_msgs__msg__PlanningLog;
    is_plain =
      (
      offsetof(DataType, env_info_index) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlanningLog__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs__msg__PlanningLog(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanningLog = {
  "deva_planning_msgs::msg",
  "PlanningLog",
  _PlanningLog__cdr_serialize,
  _PlanningLog__cdr_deserialize,
  _PlanningLog__get_serialized_size,
  _PlanningLog__max_serialized_size
};

static rosidl_message_type_support_t _PlanningLog__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningLog,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, PlanningLog)() {
  return &_PlanningLog__type_support;
}

#if defined(__cplusplus)
}
#endif

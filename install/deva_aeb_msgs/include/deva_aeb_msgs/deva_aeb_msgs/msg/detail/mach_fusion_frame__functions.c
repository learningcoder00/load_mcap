// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_aeb_msgs__msg__MachFusionFrame__init(deva_aeb_msgs__msg__MachFusionFrame * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_aeb_msgs__msg__MachFusionFrame__fini(msg);
    return false;
  }
  // frame_id
  // rv_timestamp
  // bev_timestamp
  // front_radar_timestamp
  // front_right_radar_timestamp
  // front_left_radar_timestamp
  // back_left_radar_timestamp
  // back_right_radar_timestamp
  // lidar_timestamp
  // ins_timestamp
  // rfu2camera_pose
  // ego2camera_pose
  // rfu_ego_pose_matirx
  // rfu_imu_pose_matirx
  // ego_world_pose_matirx
  // camera_k_matrix
  // imu_world_translation
  // imu_world_rotation
  // rfu2camera_pose_front
  // rfu2camera_pose_front_left
  // rfu2camera_pose_front_right
  // rfu2camera_pose_back
  // rfu2camera_pose_back_left
  // rfu2camera_pose_back_right
  // vehile_report_time
  // reserve1
  // reserve2
  // reserve3
  // reserve4
  // reserve5
  // reserve6
  // reserve7
  return true;
}

void
deva_aeb_msgs__msg__MachFusionFrame__fini(deva_aeb_msgs__msg__MachFusionFrame * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // frame_id
  // rv_timestamp
  // bev_timestamp
  // front_radar_timestamp
  // front_right_radar_timestamp
  // front_left_radar_timestamp
  // back_left_radar_timestamp
  // back_right_radar_timestamp
  // lidar_timestamp
  // ins_timestamp
  // rfu2camera_pose
  // ego2camera_pose
  // rfu_ego_pose_matirx
  // rfu_imu_pose_matirx
  // ego_world_pose_matirx
  // camera_k_matrix
  // imu_world_translation
  // imu_world_rotation
  // rfu2camera_pose_front
  // rfu2camera_pose_front_left
  // rfu2camera_pose_front_right
  // rfu2camera_pose_back
  // rfu2camera_pose_back_left
  // rfu2camera_pose_back_right
  // vehile_report_time
  // reserve1
  // reserve2
  // reserve3
  // reserve4
  // reserve5
  // reserve6
  // reserve7
}

bool
deva_aeb_msgs__msg__MachFusionFrame__are_equal(const deva_aeb_msgs__msg__MachFusionFrame * lhs, const deva_aeb_msgs__msg__MachFusionFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // frame_id
  if (lhs->frame_id != rhs->frame_id) {
    return false;
  }
  // rv_timestamp
  if (lhs->rv_timestamp != rhs->rv_timestamp) {
    return false;
  }
  // bev_timestamp
  if (lhs->bev_timestamp != rhs->bev_timestamp) {
    return false;
  }
  // front_radar_timestamp
  if (lhs->front_radar_timestamp != rhs->front_radar_timestamp) {
    return false;
  }
  // front_right_radar_timestamp
  if (lhs->front_right_radar_timestamp != rhs->front_right_radar_timestamp) {
    return false;
  }
  // front_left_radar_timestamp
  if (lhs->front_left_radar_timestamp != rhs->front_left_radar_timestamp) {
    return false;
  }
  // back_left_radar_timestamp
  if (lhs->back_left_radar_timestamp != rhs->back_left_radar_timestamp) {
    return false;
  }
  // back_right_radar_timestamp
  if (lhs->back_right_radar_timestamp != rhs->back_right_radar_timestamp) {
    return false;
  }
  // lidar_timestamp
  if (lhs->lidar_timestamp != rhs->lidar_timestamp) {
    return false;
  }
  // ins_timestamp
  if (lhs->ins_timestamp != rhs->ins_timestamp) {
    return false;
  }
  // rfu2camera_pose
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->rfu2camera_pose[i] != rhs->rfu2camera_pose[i]) {
      return false;
    }
  }
  // ego2camera_pose
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->ego2camera_pose[i] != rhs->ego2camera_pose[i]) {
      return false;
    }
  }
  // rfu_ego_pose_matirx
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->rfu_ego_pose_matirx[i] != rhs->rfu_ego_pose_matirx[i]) {
      return false;
    }
  }
  // rfu_imu_pose_matirx
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->rfu_imu_pose_matirx[i] != rhs->rfu_imu_pose_matirx[i]) {
      return false;
    }
  }
  // ego_world_pose_matirx
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->ego_world_pose_matirx[i] != rhs->ego_world_pose_matirx[i]) {
      return false;
    }
  }
  // camera_k_matrix
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->camera_k_matrix[i] != rhs->camera_k_matrix[i]) {
      return false;
    }
  }
  // imu_world_translation
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->imu_world_translation[i] != rhs->imu_world_translation[i]) {
      return false;
    }
  }
  // imu_world_rotation
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->imu_world_rotation[i] != rhs->imu_world_rotation[i]) {
      return false;
    }
  }
  // rfu2camera_pose_front
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->rfu2camera_pose_front[i] != rhs->rfu2camera_pose_front[i]) {
      return false;
    }
  }
  // rfu2camera_pose_front_left
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->rfu2camera_pose_front_left[i] != rhs->rfu2camera_pose_front_left[i]) {
      return false;
    }
  }
  // rfu2camera_pose_front_right
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->rfu2camera_pose_front_right[i] != rhs->rfu2camera_pose_front_right[i]) {
      return false;
    }
  }
  // rfu2camera_pose_back
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->rfu2camera_pose_back[i] != rhs->rfu2camera_pose_back[i]) {
      return false;
    }
  }
  // rfu2camera_pose_back_left
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->rfu2camera_pose_back_left[i] != rhs->rfu2camera_pose_back_left[i]) {
      return false;
    }
  }
  // rfu2camera_pose_back_right
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->rfu2camera_pose_back_right[i] != rhs->rfu2camera_pose_back_right[i]) {
      return false;
    }
  }
  // vehile_report_time
  if (lhs->vehile_report_time != rhs->vehile_report_time) {
    return false;
  }
  // reserve1
  if (lhs->reserve1 != rhs->reserve1) {
    return false;
  }
  // reserve2
  if (lhs->reserve2 != rhs->reserve2) {
    return false;
  }
  // reserve3
  if (lhs->reserve3 != rhs->reserve3) {
    return false;
  }
  // reserve4
  if (lhs->reserve4 != rhs->reserve4) {
    return false;
  }
  // reserve5
  if (lhs->reserve5 != rhs->reserve5) {
    return false;
  }
  // reserve6
  if (lhs->reserve6 != rhs->reserve6) {
    return false;
  }
  // reserve7
  if (lhs->reserve7 != rhs->reserve7) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__MachFusionFrame__copy(
  const deva_aeb_msgs__msg__MachFusionFrame * input,
  deva_aeb_msgs__msg__MachFusionFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // frame_id
  output->frame_id = input->frame_id;
  // rv_timestamp
  output->rv_timestamp = input->rv_timestamp;
  // bev_timestamp
  output->bev_timestamp = input->bev_timestamp;
  // front_radar_timestamp
  output->front_radar_timestamp = input->front_radar_timestamp;
  // front_right_radar_timestamp
  output->front_right_radar_timestamp = input->front_right_radar_timestamp;
  // front_left_radar_timestamp
  output->front_left_radar_timestamp = input->front_left_radar_timestamp;
  // back_left_radar_timestamp
  output->back_left_radar_timestamp = input->back_left_radar_timestamp;
  // back_right_radar_timestamp
  output->back_right_radar_timestamp = input->back_right_radar_timestamp;
  // lidar_timestamp
  output->lidar_timestamp = input->lidar_timestamp;
  // ins_timestamp
  output->ins_timestamp = input->ins_timestamp;
  // rfu2camera_pose
  for (size_t i = 0; i < 7; ++i) {
    output->rfu2camera_pose[i] = input->rfu2camera_pose[i];
  }
  // ego2camera_pose
  for (size_t i = 0; i < 7; ++i) {
    output->ego2camera_pose[i] = input->ego2camera_pose[i];
  }
  // rfu_ego_pose_matirx
  for (size_t i = 0; i < 16; ++i) {
    output->rfu_ego_pose_matirx[i] = input->rfu_ego_pose_matirx[i];
  }
  // rfu_imu_pose_matirx
  for (size_t i = 0; i < 16; ++i) {
    output->rfu_imu_pose_matirx[i] = input->rfu_imu_pose_matirx[i];
  }
  // ego_world_pose_matirx
  for (size_t i = 0; i < 16; ++i) {
    output->ego_world_pose_matirx[i] = input->ego_world_pose_matirx[i];
  }
  // camera_k_matrix
  for (size_t i = 0; i < 9; ++i) {
    output->camera_k_matrix[i] = input->camera_k_matrix[i];
  }
  // imu_world_translation
  for (size_t i = 0; i < 3; ++i) {
    output->imu_world_translation[i] = input->imu_world_translation[i];
  }
  // imu_world_rotation
  for (size_t i = 0; i < 4; ++i) {
    output->imu_world_rotation[i] = input->imu_world_rotation[i];
  }
  // rfu2camera_pose_front
  for (size_t i = 0; i < 7; ++i) {
    output->rfu2camera_pose_front[i] = input->rfu2camera_pose_front[i];
  }
  // rfu2camera_pose_front_left
  for (size_t i = 0; i < 7; ++i) {
    output->rfu2camera_pose_front_left[i] = input->rfu2camera_pose_front_left[i];
  }
  // rfu2camera_pose_front_right
  for (size_t i = 0; i < 7; ++i) {
    output->rfu2camera_pose_front_right[i] = input->rfu2camera_pose_front_right[i];
  }
  // rfu2camera_pose_back
  for (size_t i = 0; i < 7; ++i) {
    output->rfu2camera_pose_back[i] = input->rfu2camera_pose_back[i];
  }
  // rfu2camera_pose_back_left
  for (size_t i = 0; i < 7; ++i) {
    output->rfu2camera_pose_back_left[i] = input->rfu2camera_pose_back_left[i];
  }
  // rfu2camera_pose_back_right
  for (size_t i = 0; i < 7; ++i) {
    output->rfu2camera_pose_back_right[i] = input->rfu2camera_pose_back_right[i];
  }
  // vehile_report_time
  output->vehile_report_time = input->vehile_report_time;
  // reserve1
  output->reserve1 = input->reserve1;
  // reserve2
  output->reserve2 = input->reserve2;
  // reserve3
  output->reserve3 = input->reserve3;
  // reserve4
  output->reserve4 = input->reserve4;
  // reserve5
  output->reserve5 = input->reserve5;
  // reserve6
  output->reserve6 = input->reserve6;
  // reserve7
  output->reserve7 = input->reserve7;
  return true;
}

deva_aeb_msgs__msg__MachFusionFrame *
deva_aeb_msgs__msg__MachFusionFrame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__MachFusionFrame * msg = (deva_aeb_msgs__msg__MachFusionFrame *)allocator.allocate(sizeof(deva_aeb_msgs__msg__MachFusionFrame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__MachFusionFrame));
  bool success = deva_aeb_msgs__msg__MachFusionFrame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__MachFusionFrame__destroy(deva_aeb_msgs__msg__MachFusionFrame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__MachFusionFrame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__MachFusionFrame__Sequence__init(deva_aeb_msgs__msg__MachFusionFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__MachFusionFrame * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__MachFusionFrame *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__MachFusionFrame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__MachFusionFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__MachFusionFrame__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
deva_aeb_msgs__msg__MachFusionFrame__Sequence__fini(deva_aeb_msgs__msg__MachFusionFrame__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deva_aeb_msgs__msg__MachFusionFrame__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

deva_aeb_msgs__msg__MachFusionFrame__Sequence *
deva_aeb_msgs__msg__MachFusionFrame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__MachFusionFrame__Sequence * array = (deva_aeb_msgs__msg__MachFusionFrame__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__MachFusionFrame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__MachFusionFrame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__MachFusionFrame__Sequence__destroy(deva_aeb_msgs__msg__MachFusionFrame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__MachFusionFrame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__MachFusionFrame__Sequence__are_equal(const deva_aeb_msgs__msg__MachFusionFrame__Sequence * lhs, const deva_aeb_msgs__msg__MachFusionFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__MachFusionFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__MachFusionFrame__Sequence__copy(
  const deva_aeb_msgs__msg__MachFusionFrame__Sequence * input,
  deva_aeb_msgs__msg__MachFusionFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__MachFusionFrame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__MachFusionFrame * data =
      (deva_aeb_msgs__msg__MachFusionFrame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__MachFusionFrame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__MachFusionFrame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__MachFusionFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

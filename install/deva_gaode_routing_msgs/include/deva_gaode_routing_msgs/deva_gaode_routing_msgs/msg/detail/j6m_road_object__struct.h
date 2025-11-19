// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/J6mRoadObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'road_object_id'
// Member 'referenced_lane_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"
// Member 'road_object_center_point'
// Member 'coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"
// Member 'road_attributes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/J6mRoadObject in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__J6mRoadObject
{
  /// 道路对象Id
  deva_gaode_routing_msgs__msg__LinkIDType road_object_id;
  /// 对象类型
  uint8_t road_object_type;
  /// 对象子类型
  uint8_t road_object_subtype;
  /// 对象中心点
  deva_gaode_routing_msgs__msg__Coordinate road_object_center_point;
  /// 对象朝向，单位为度，与正北方向的夹角，顺时针为正 [0, 360]
  uint16_t road_object_heading;
  /// 对象属性
  rosidl_runtime_c__String road_attributes;
  /// 对象置信度，单位为百分之（返回 5 表示 5%）
  uint32_t confidence;
  /// 基于link_geometry起点的偏移距离
  uint32_t offset;
  /// 对象几何形状
  deva_gaode_routing_msgs__msg__Coordinate__Sequence coordinates;
  /// 道路对象关联laneId列表
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence referenced_lane_ids;
} deva_gaode_routing_msgs__msg__J6mRoadObject;

// Struct for a sequence of deva_gaode_routing_msgs__msg__J6mRoadObject.
typedef struct deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence
{
  deva_gaode_routing_msgs__msg__J6mRoadObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__STRUCT_H_

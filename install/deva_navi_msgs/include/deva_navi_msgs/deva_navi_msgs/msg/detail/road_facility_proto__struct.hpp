// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/RoadFacilityProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_range'
#include "deva_navi_msgs/msg/detail/group_time_range_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__RoadFacilityProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__RoadFacilityProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadFacilityProto_
{
  using Type = RoadFacilityProto_<ContainerAllocator>;

  explicit RoadFacilityProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->lon = 0l;
      this->lat = 0l;
      this->dist_to_end = 0l;
      this->valid_lane = 0l;
      this->lane_num = 0l;
    }
  }

  explicit RoadFacilityProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->lon = 0l;
      this->lat = 0l;
      this->dist_to_end = 0l;
      this->valid_lane = 0l;
      this->lane_num = 0l;
    }
  }

  // field types and members
  using _type_type =
    int32_t;
  _type_type type;
  using _lon_type =
    int32_t;
  _lon_type lon;
  using _lat_type =
    int32_t;
  _lat_type lat;
  using _speed_limit_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _speed_limit_type speed_limit;
  using _dist_to_end_type =
    int32_t;
  _dist_to_end_type dist_to_end;
  using _valid_lane_type =
    int32_t;
  _valid_lane_type valid_lane;
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _time_range_type =
    std::vector<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>>>;
  _time_range_type time_range;

  // setters for named parameter idiom
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__lon(
    const int32_t & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__lat(
    const int32_t & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }
  Type & set__dist_to_end(
    const int32_t & _arg)
  {
    this->dist_to_end = _arg;
    return *this;
  }
  Type & set__valid_lane(
    const int32_t & _arg)
  {
    this->valid_lane = _arg;
    return *this;
  }
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__time_range(
    const std::vector<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>>> & _arg)
  {
    this->time_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__RoadFacilityProto
    std::shared_ptr<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__RoadFacilityProto
    std::shared_ptr<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadFacilityProto_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    if (this->dist_to_end != other.dist_to_end) {
      return false;
    }
    if (this->valid_lane != other.valid_lane) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->time_range != other.time_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadFacilityProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadFacilityProto_

// alias to use template instance with default allocator
using RoadFacilityProto =
  deva_navi_msgs::msg::RoadFacilityProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__STRUCT_HPP_

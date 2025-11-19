// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/TrafficRount.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lane_info'
#include "deva_perception_msgs/msg/detail/lane_info__struct.hpp"
// Member 'road_info'
#include "deva_perception_msgs/msg/detail/road_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__TrafficRount __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__TrafficRount __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficRount_
{
  using Type = TrafficRount_<ContainerAllocator>;

  explicit TrafficRount_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_info(_init),
    road_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->cur_road = 0l;
    }
  }

  explicit TrafficRount_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_info(_alloc, _init),
    road_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0.0;
      this->cur_road = 0l;
    }
  }

  // field types and members
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _lane_info_type =
    deva_perception_msgs::msg::LaneInfo_<ContainerAllocator>;
  _lane_info_type lane_info;
  using _cur_road_type =
    int32_t;
  _cur_road_type cur_road;
  using _road_info_type =
    deva_perception_msgs::msg::RoadInfo_<ContainerAllocator>;
  _road_info_type road_info;

  // setters for named parameter idiom
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__lane_info(
    const deva_perception_msgs::msg::LaneInfo_<ContainerAllocator> & _arg)
  {
    this->lane_info = _arg;
    return *this;
  }
  Type & set__cur_road(
    const int32_t & _arg)
  {
    this->cur_road = _arg;
    return *this;
  }
  Type & set__road_info(
    const deva_perception_msgs::msg::RoadInfo_<ContainerAllocator> & _arg)
  {
    this->road_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::TrafficRount_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::TrafficRount_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficRount_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficRount_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficRount_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficRount_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficRount_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficRount_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficRount_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficRount_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficRount
    std::shared_ptr<deva_perception_msgs::msg::TrafficRount_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficRount
    std::shared_ptr<deva_perception_msgs::msg::TrafficRount_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficRount_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->lane_info != other.lane_info) {
      return false;
    }
    if (this->cur_road != other.cur_road) {
      return false;
    }
    if (this->road_info != other.road_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficRount_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficRount_

// alias to use template instance with default allocator
using TrafficRount =
  deva_perception_msgs::msg::TrafficRount_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RoadInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RoadInfo __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadInfo_
{
  using Type = RoadInfo_<ContainerAllocator>;

  explicit RoadInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_traffic_light = 0l;
      this->road_type = 0;
      this->road_class = 0;
    }
  }

  explicit RoadInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_traffic_light = 0l;
      this->road_type = 0;
      this->road_class = 0;
    }
  }

  // field types and members
  using _has_traffic_light_type =
    int32_t;
  _has_traffic_light_type has_traffic_light;
  using _road_type_type =
    uint8_t;
  _road_type_type road_type;
  using _road_class_type =
    uint8_t;
  _road_class_type road_class;

  // setters for named parameter idiom
  Type & set__has_traffic_light(
    const int32_t & _arg)
  {
    this->has_traffic_light = _arg;
    return *this;
  }
  Type & set__road_type(
    const uint8_t & _arg)
  {
    this->road_type = _arg;
    return *this;
  }
  Type & set__road_class(
    const uint8_t & _arg)
  {
    this->road_class = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RoadInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RoadInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RoadInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RoadInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RoadInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RoadInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RoadInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RoadInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RoadInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RoadInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RoadInfo
    std::shared_ptr<deva_perception_msgs::msg::RoadInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RoadInfo
    std::shared_ptr<deva_perception_msgs::msg::RoadInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadInfo_ & other) const
  {
    if (this->has_traffic_light != other.has_traffic_light) {
      return false;
    }
    if (this->road_type != other.road_type) {
      return false;
    }
    if (this->road_class != other.road_class) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadInfo_

// alias to use template instance with default allocator
using RoadInfo =
  deva_perception_msgs::msg::RoadInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__STRUCT_HPP_

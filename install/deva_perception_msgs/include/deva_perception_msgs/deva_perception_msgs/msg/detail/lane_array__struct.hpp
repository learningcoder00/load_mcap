// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'lanes'
#include "deva_perception_msgs/msg/detail/lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__LaneArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__LaneArray __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneArray_
{
  using Type = LaneArray_<ContainerAllocator>;

  explicit LaneArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_left_lane_id = 0l;
      this->vehicle_right_lane_id = 0l;
    }
  }

  explicit LaneArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_left_lane_id = 0l;
      this->vehicle_right_lane_id = 0l;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicle_left_lane_id_type =
    int32_t;
  _vehicle_left_lane_id_type vehicle_left_lane_id;
  using _vehicle_right_lane_id_type =
    int32_t;
  _vehicle_right_lane_id_type vehicle_right_lane_id;
  using _lanes_type =
    std::vector<deva_perception_msgs::msg::Lane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Lane_<ContainerAllocator>>>;
  _lanes_type lanes;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicle_left_lane_id(
    const int32_t & _arg)
  {
    this->vehicle_left_lane_id = _arg;
    return *this;
  }
  Type & set__vehicle_right_lane_id(
    const int32_t & _arg)
  {
    this->vehicle_right_lane_id = _arg;
    return *this;
  }
  Type & set__lanes(
    const std::vector<deva_perception_msgs::msg::Lane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Lane_<ContainerAllocator>>> & _arg)
  {
    this->lanes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::LaneArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::LaneArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__LaneArray
    std::shared_ptr<deva_perception_msgs::msg::LaneArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__LaneArray
    std::shared_ptr<deva_perception_msgs::msg::LaneArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicle_left_lane_id != other.vehicle_left_lane_id) {
      return false;
    }
    if (this->vehicle_right_lane_id != other.vehicle_right_lane_id) {
      return false;
    }
    if (this->lanes != other.lanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneArray_

// alias to use template instance with default allocator
using LaneArray =
  deva_perception_msgs::msg::LaneArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAY__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RvLaneResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__STRUCT_HPP_

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
// Member 'laneline_2d_array'
#include "deva_perception_msgs/msg/detail/lane_line2d_array__struct.hpp"
// Member 'stopline_2d_array'
#include "deva_perception_msgs/msg/detail/stop_line2d_array__struct.hpp"
// Member 'crosswalk_2d_array'
#include "deva_perception_msgs/msg/detail/crosswalk2d_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RvLaneResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RvLaneResult __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RvLaneResult_
{
  using Type = RvLaneResult_<ContainerAllocator>;

  explicit RvLaneResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RvLaneResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _laneline_2d_array_type =
    std::vector<deva_perception_msgs::msg::LaneLine2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::LaneLine2dArray_<ContainerAllocator>>>;
  _laneline_2d_array_type laneline_2d_array;
  using _stopline_2d_array_type =
    std::vector<deva_perception_msgs::msg::StopLine2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::StopLine2dArray_<ContainerAllocator>>>;
  _stopline_2d_array_type stopline_2d_array;
  using _crosswalk_2d_array_type =
    std::vector<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>>>;
  _crosswalk_2d_array_type crosswalk_2d_array;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__laneline_2d_array(
    const std::vector<deva_perception_msgs::msg::LaneLine2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::LaneLine2dArray_<ContainerAllocator>>> & _arg)
  {
    this->laneline_2d_array = _arg;
    return *this;
  }
  Type & set__stopline_2d_array(
    const std::vector<deva_perception_msgs::msg::StopLine2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::StopLine2dArray_<ContainerAllocator>>> & _arg)
  {
    this->stopline_2d_array = _arg;
    return *this;
  }
  Type & set__crosswalk_2d_array(
    const std::vector<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Crosswalk2dArray_<ContainerAllocator>>> & _arg)
  {
    this->crosswalk_2d_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RvLaneResult
    std::shared_ptr<deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RvLaneResult
    std::shared_ptr<deva_perception_msgs::msg::RvLaneResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RvLaneResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->laneline_2d_array != other.laneline_2d_array) {
      return false;
    }
    if (this->stopline_2d_array != other.stopline_2d_array) {
      return false;
    }
    if (this->crosswalk_2d_array != other.crosswalk_2d_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const RvLaneResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RvLaneResult_

// alias to use template instance with default allocator
using RvLaneResult =
  deva_perception_msgs::msg::RvLaneResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_LANE_RESULT__STRUCT_HPP_

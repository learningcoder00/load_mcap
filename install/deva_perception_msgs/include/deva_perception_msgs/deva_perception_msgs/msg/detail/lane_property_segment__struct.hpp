// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/LanePropertySegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'segment_points'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__LanePropertySegment __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__LanePropertySegment __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LanePropertySegment_
{
  using Type = LanePropertySegment_<ContainerAllocator>;

  explicit LanePropertySegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_segment = 0ul;
    }
  }

  explicit LanePropertySegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_segment = 0ul;
    }
  }

  // field types and members
  using _num_segment_type =
    uint32_t;
  _num_segment_type num_segment;
  using _segment_properties_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _segment_properties_type segment_properties;
  using _segment_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _segment_points_type segment_points;

  // setters for named parameter idiom
  Type & set__num_segment(
    const uint32_t & _arg)
  {
    this->num_segment = _arg;
    return *this;
  }
  Type & set__segment_properties(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->segment_properties = _arg;
    return *this;
  }
  Type & set__segment_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->segment_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__LanePropertySegment
    std::shared_ptr<deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__LanePropertySegment
    std::shared_ptr<deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LanePropertySegment_ & other) const
  {
    if (this->num_segment != other.num_segment) {
      return false;
    }
    if (this->segment_properties != other.segment_properties) {
      return false;
    }
    if (this->segment_points != other.segment_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const LanePropertySegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LanePropertySegment_

// alias to use template instance with default allocator
using LanePropertySegment =
  deva_perception_msgs::msg::LanePropertySegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneMarking.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'marking_equation_vec'
#include "deva_common_msgs/msg/detail/equation_curve__struct.hpp"
// Member 'marking_type_vec'
#include "deva_map_msgs/msg/detail/channel_marking_type__struct.hpp"
// Member 'marking_point_vec'
#include "deva_common_msgs/msg/detail/point2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__ChannelLaneMarking __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__ChannelLaneMarking __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChannelLaneMarking_
{
  using Type = ChannelLaneMarking_<ContainerAllocator>;

  explicit ChannelLaneMarking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->perception_lane_id = 0;
    }
  }

  explicit ChannelLaneMarking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->perception_lane_id = 0;
    }
  }

  // field types and members
  using _available_type =
    bool;
  _available_type available;
  using _perception_lane_id_type =
    uint8_t;
  _perception_lane_id_type perception_lane_id;
  using _marking_equation_vec_type =
    std::vector<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>>;
  _marking_equation_vec_type marking_equation_vec;
  using _marking_type_vec_type =
    std::vector<deva_map_msgs::msg::ChannelMarkingType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelMarkingType_<ContainerAllocator>>>;
  _marking_type_vec_type marking_type_vec;
  using _marking_point_vec_type =
    std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>>;
  _marking_point_vec_type marking_point_vec;

  // setters for named parameter idiom
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__perception_lane_id(
    const uint8_t & _arg)
  {
    this->perception_lane_id = _arg;
    return *this;
  }
  Type & set__marking_equation_vec(
    const std::vector<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>> & _arg)
  {
    this->marking_equation_vec = _arg;
    return *this;
  }
  Type & set__marking_type_vec(
    const std::vector<deva_map_msgs::msg::ChannelMarkingType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelMarkingType_<ContainerAllocator>>> & _arg)
  {
    this->marking_type_vec = _arg;
    return *this;
  }
  Type & set__marking_point_vec(
    const std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>> & _arg)
  {
    this->marking_point_vec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__ChannelLaneMarking
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__ChannelLaneMarking
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChannelLaneMarking_ & other) const
  {
    if (this->available != other.available) {
      return false;
    }
    if (this->perception_lane_id != other.perception_lane_id) {
      return false;
    }
    if (this->marking_equation_vec != other.marking_equation_vec) {
      return false;
    }
    if (this->marking_type_vec != other.marking_type_vec) {
      return false;
    }
    if (this->marking_point_vec != other.marking_point_vec) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChannelLaneMarking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChannelLaneMarking_

// alias to use template instance with default allocator
using ChannelLaneMarking =
  deva_map_msgs::msg::ChannelLaneMarking_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__STRUCT_HPP_

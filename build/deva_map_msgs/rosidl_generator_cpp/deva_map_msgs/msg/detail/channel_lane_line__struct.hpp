// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'markingequation_vec'
#include "deva_common_msgs/msg/detail/equation_curve__struct.hpp"
// Member 'markingpoint_vec'
#include "deva_common_msgs/msg/detail/point2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__ChannelLaneLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__ChannelLaneLine __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChannelLaneLine_
{
  using Type = ChannelLaneLine_<ContainerAllocator>;

  explicit ChannelLaneLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
    }
  }

  explicit ChannelLaneLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
    }
  }

  // field types and members
  using _available_type =
    bool;
  _available_type available;
  using _markingequation_vec_type =
    std::vector<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>>;
  _markingequation_vec_type markingequation_vec;
  using _markingpoint_vec_type =
    std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>>;
  _markingpoint_vec_type markingpoint_vec;

  // setters for named parameter idiom
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__markingequation_vec(
    const std::vector<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>> & _arg)
  {
    this->markingequation_vec = _arg;
    return *this;
  }
  Type & set__markingpoint_vec(
    const std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>> & _arg)
  {
    this->markingpoint_vec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__ChannelLaneLine
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__ChannelLaneLine
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChannelLaneLine_ & other) const
  {
    if (this->available != other.available) {
      return false;
    }
    if (this->markingequation_vec != other.markingequation_vec) {
      return false;
    }
    if (this->markingpoint_vec != other.markingpoint_vec) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChannelLaneLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChannelLaneLine_

// alias to use template instance with default allocator
using ChannelLaneLine =
  deva_map_msgs::msg::ChannelLaneLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__STRUCT_HPP_

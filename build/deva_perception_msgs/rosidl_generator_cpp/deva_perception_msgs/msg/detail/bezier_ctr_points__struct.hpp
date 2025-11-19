// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/BezierCtrPoints.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'bezier_ctr_points'
#include "deva_perception_msgs/msg/detail/bezier_ctr_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__BezierCtrPoints __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__BezierCtrPoints __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BezierCtrPoints_
{
  using Type = BezierCtrPoints_<ContainerAllocator>;

  explicit BezierCtrPoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit BezierCtrPoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bezier_ctr_points_type =
    std::vector<deva_perception_msgs::msg::BezierCtrPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::BezierCtrPoint_<ContainerAllocator>>>;
  _bezier_ctr_points_type bezier_ctr_points;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bezier_ctr_points(
    const std::vector<deva_perception_msgs::msg::BezierCtrPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::BezierCtrPoint_<ContainerAllocator>>> & _arg)
  {
    this->bezier_ctr_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__BezierCtrPoints
    std::shared_ptr<deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__BezierCtrPoints
    std::shared_ptr<deva_perception_msgs::msg::BezierCtrPoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BezierCtrPoints_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bezier_ctr_points != other.bezier_ctr_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const BezierCtrPoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BezierCtrPoints_

// alias to use template instance with default allocator
using BezierCtrPoints =
  deva_perception_msgs::msg::BezierCtrPoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__STRUCT_HPP_

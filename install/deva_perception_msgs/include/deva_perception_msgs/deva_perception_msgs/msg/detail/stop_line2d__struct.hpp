// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/StopLine2d.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STOP_LINE2D__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STOP_LINE2D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__StopLine2d __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__StopLine2d __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopLine2d_
{
  using Type = StopLine2d_<ContainerAllocator>;

  explicit StopLine2d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0ul;
      this->confidence = 0.0f;
      this->left_point_pos_lgt = 0.0f;
      this->left_point_pos_lat = 0.0f;
      this->right_point_pos_lgt = 0.0f;
      this->right_point_pos_lat = 0.0f;
    }
  }

  explicit StopLine2d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0ul;
      this->confidence = 0.0f;
      this->left_point_pos_lgt = 0.0f;
      this->left_point_pos_lat = 0.0f;
      this->right_point_pos_lgt = 0.0f;
      this->right_point_pos_lat = 0.0f;
    }
  }

  // field types and members
  using _lane_id_type =
    uint32_t;
  _lane_id_type lane_id;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _pixel_points_type =
    std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>>;
  _pixel_points_type pixel_points;
  using _left_point_pos_lgt_type =
    float;
  _left_point_pos_lgt_type left_point_pos_lgt;
  using _left_point_pos_lat_type =
    float;
  _left_point_pos_lat_type left_point_pos_lat;
  using _right_point_pos_lgt_type =
    float;
  _right_point_pos_lgt_type right_point_pos_lgt;
  using _right_point_pos_lat_type =
    float;
  _right_point_pos_lat_type right_point_pos_lat;

  // setters for named parameter idiom
  Type & set__lane_id(
    const uint32_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__pixel_points(
    const std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>> & _arg)
  {
    this->pixel_points = _arg;
    return *this;
  }
  Type & set__left_point_pos_lgt(
    const float & _arg)
  {
    this->left_point_pos_lgt = _arg;
    return *this;
  }
  Type & set__left_point_pos_lat(
    const float & _arg)
  {
    this->left_point_pos_lat = _arg;
    return *this;
  }
  Type & set__right_point_pos_lgt(
    const float & _arg)
  {
    this->right_point_pos_lgt = _arg;
    return *this;
  }
  Type & set__right_point_pos_lat(
    const float & _arg)
  {
    this->right_point_pos_lat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::StopLine2d_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::StopLine2d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::StopLine2d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::StopLine2d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::StopLine2d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::StopLine2d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::StopLine2d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::StopLine2d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::StopLine2d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::StopLine2d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__StopLine2d
    std::shared_ptr<deva_perception_msgs::msg::StopLine2d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__StopLine2d
    std::shared_ptr<deva_perception_msgs::msg::StopLine2d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopLine2d_ & other) const
  {
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->pixel_points != other.pixel_points) {
      return false;
    }
    if (this->left_point_pos_lgt != other.left_point_pos_lgt) {
      return false;
    }
    if (this->left_point_pos_lat != other.left_point_pos_lat) {
      return false;
    }
    if (this->right_point_pos_lgt != other.right_point_pos_lgt) {
      return false;
    }
    if (this->right_point_pos_lat != other.right_point_pos_lat) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopLine2d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopLine2d_

// alias to use template instance with default allocator
using StopLine2d =
  deva_perception_msgs::msg::StopLine2d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STOP_LINE2D__STRUCT_HPP_

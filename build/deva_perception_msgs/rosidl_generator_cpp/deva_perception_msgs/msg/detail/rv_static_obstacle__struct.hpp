// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RvStaticObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RvStaticObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RvStaticObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RvStaticObstacle_
{
  using Type = RvStaticObstacle_<ContainerAllocator>;

  explicit RvStaticObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox2d(_init),
    pose(_init),
    dimensions(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = 0;
      this->with_bev_info = false;
      this->bind_type = 0;
      this->score = 0.0;
      this->vertical_distance = 0.0;
      this->horizontal_distance = 0.0;
      this->left_lane_id = 0ul;
      this->right_lane_id = 0ul;
      this->left_lane_distance = 0.0;
      this->right_lane_distance = 0.0;
    }
  }

  explicit RvStaticObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox2d(_alloc, _init),
    pose(_alloc, _init),
    dimensions(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = 0;
      this->with_bev_info = false;
      this->bind_type = 0;
      this->score = 0.0;
      this->vertical_distance = 0.0;
      this->horizontal_distance = 0.0;
      this->left_lane_id = 0ul;
      this->right_lane_id = 0ul;
      this->left_lane_distance = 0.0;
      this->right_lane_distance = 0.0;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _bbox2d_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _bbox2d_type bbox2d;
  using _with_bev_info_type =
    bool;
  _with_bev_info_type with_bev_info;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _dimensions_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _dimensions_type dimensions;
  using _bind_type_type =
    uint8_t;
  _bind_type_type bind_type;
  using _score_type =
    double;
  _score_type score;
  using _vertical_distance_type =
    double;
  _vertical_distance_type vertical_distance;
  using _horizontal_distance_type =
    double;
  _horizontal_distance_type horizontal_distance;
  using _left_lane_id_type =
    uint32_t;
  _left_lane_id_type left_lane_id;
  using _right_lane_id_type =
    uint32_t;
  _right_lane_id_type right_lane_id;
  using _left_lane_distance_type =
    double;
  _left_lane_distance_type left_lane_distance;
  using _right_lane_distance_type =
    double;
  _right_lane_distance_type right_lane_distance;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__bbox2d(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->bbox2d = _arg;
    return *this;
  }
  Type & set__with_bev_info(
    const bool & _arg)
  {
    this->with_bev_info = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__dimensions(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->dimensions = _arg;
    return *this;
  }
  Type & set__bind_type(
    const uint8_t & _arg)
  {
    this->bind_type = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__vertical_distance(
    const double & _arg)
  {
    this->vertical_distance = _arg;
    return *this;
  }
  Type & set__horizontal_distance(
    const double & _arg)
  {
    this->horizontal_distance = _arg;
    return *this;
  }
  Type & set__left_lane_id(
    const uint32_t & _arg)
  {
    this->left_lane_id = _arg;
    return *this;
  }
  Type & set__right_lane_id(
    const uint32_t & _arg)
  {
    this->right_lane_id = _arg;
    return *this;
  }
  Type & set__left_lane_distance(
    const double & _arg)
  {
    this->left_lane_distance = _arg;
    return *this;
  }
  Type & set__right_lane_distance(
    const double & _arg)
  {
    this->right_lane_distance = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CONE =
    1u;
  static constexpr uint8_t BAR =
    2u;
  static constexpr uint8_t WATERHORSE =
    3u;
  static constexpr uint8_t TRIANGLE =
    4u;
  static constexpr uint8_t FAIL =
    0u;
  static constexpr uint8_t LEFT =
    1u;
  static constexpr uint8_t MID =
    2u;
  static constexpr uint8_t RIGHT =
    3u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RvStaticObstacle
    std::shared_ptr<deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RvStaticObstacle
    std::shared_ptr<deva_perception_msgs::msg::RvStaticObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RvStaticObstacle_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->bbox2d != other.bbox2d) {
      return false;
    }
    if (this->with_bev_info != other.with_bev_info) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    if (this->bind_type != other.bind_type) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->vertical_distance != other.vertical_distance) {
      return false;
    }
    if (this->horizontal_distance != other.horizontal_distance) {
      return false;
    }
    if (this->left_lane_id != other.left_lane_id) {
      return false;
    }
    if (this->right_lane_id != other.right_lane_id) {
      return false;
    }
    if (this->left_lane_distance != other.left_lane_distance) {
      return false;
    }
    if (this->right_lane_distance != other.right_lane_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const RvStaticObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RvStaticObstacle_

// alias to use template instance with default allocator
using RvStaticObstacle =
  deva_perception_msgs::msg::RvStaticObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::CONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::BAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::WATERHORSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::TRIANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::MID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RvStaticObstacle_<ContainerAllocator>::RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_STATIC_OBSTACLE__STRUCT_HPP_

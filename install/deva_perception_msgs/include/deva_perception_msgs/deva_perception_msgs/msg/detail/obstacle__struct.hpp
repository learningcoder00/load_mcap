// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'detection_velocity'
// Member 'velocity'
// Member 'velocity_variance'
// Member 'acceleration'
// Member 'acceleration_variance'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.hpp"
// Member 'extra_info'
#include "deva_perception_msgs/msg/detail/dict_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__Obstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__Obstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Obstacle_
{
  using Type = Obstacle_<ContainerAllocator>;

  explicit Obstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init),
    dimensions(_init),
    detection_velocity(_init),
    velocity(_init),
    velocity_variance(_init),
    acceleration(_init),
    acceleration_variance(_init),
    bbox2d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->tracking_time = 0.0;
      this->track_length = 0ul;
      this->score = 0.0;
      this->is_predict = false;
      this->type = 0ul;
    }
  }

  explicit Obstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init),
    dimensions(_alloc, _init),
    detection_velocity(_alloc, _init),
    velocity(_alloc, _init),
    velocity_variance(_alloc, _init),
    acceleration(_alloc, _init),
    acceleration_variance(_alloc, _init),
    bbox2d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->tracking_time = 0.0;
      this->track_length = 0ul;
      this->score = 0.0;
      this->is_predict = false;
      this->type = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _dimensions_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _dimensions_type dimensions;
  using _detection_velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _detection_velocity_type detection_velocity;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _velocity_variance_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_variance_type velocity_variance;
  using _acceleration_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _acceleration_variance_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _acceleration_variance_type acceleration_variance;
  using _tracking_time_type =
    double;
  _tracking_time_type tracking_time;
  using _track_length_type =
    uint32_t;
  _track_length_type track_length;
  using _score_type =
    double;
  _score_type score;
  using _is_predict_type =
    bool;
  _is_predict_type is_predict;
  using _type_type =
    uint32_t;
  _type_type type;
  using _bbox2d_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _bbox2d_type bbox2d;
  using _extra_info_type =
    std::vector<deva_perception_msgs::msg::DictInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::DictInfo_<ContainerAllocator>>>;
  _extra_info_type extra_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
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
  Type & set__detection_velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->detection_velocity = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__velocity_variance(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_variance = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__acceleration_variance(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->acceleration_variance = _arg;
    return *this;
  }
  Type & set__tracking_time(
    const double & _arg)
  {
    this->tracking_time = _arg;
    return *this;
  }
  Type & set__track_length(
    const uint32_t & _arg)
  {
    this->track_length = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__is_predict(
    const bool & _arg)
  {
    this->is_predict = _arg;
    return *this;
  }
  Type & set__type(
    const uint32_t & _arg)
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
  Type & set__extra_info(
    const std::vector<deva_perception_msgs::msg::DictInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::DictInfo_<ContainerAllocator>>> & _arg)
  {
    this->extra_info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t CAR =
    1u;
  static constexpr uint32_t TRUCK =
    2u;
  static constexpr uint32_t CONSTRUCTION_VEHICLE =
    3u;
  static constexpr uint32_t BUS =
    4u;
  static constexpr uint32_t MOTORCYCLE =
    5u;
  static constexpr uint32_t BICYCLE =
    6u;
  static constexpr uint32_t TRICYCLE =
    7u;
  static constexpr uint32_t CYCLIST =
    8u;
  static constexpr uint32_t PEDESTRIAN =
    9u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::Obstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::Obstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Obstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Obstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Obstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Obstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Obstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Obstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Obstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Obstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__Obstacle
    std::shared_ptr<deva_perception_msgs::msg::Obstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__Obstacle
    std::shared_ptr<deva_perception_msgs::msg::Obstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Obstacle_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    if (this->detection_velocity != other.detection_velocity) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->velocity_variance != other.velocity_variance) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->acceleration_variance != other.acceleration_variance) {
      return false;
    }
    if (this->tracking_time != other.tracking_time) {
      return false;
    }
    if (this->track_length != other.track_length) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->is_predict != other.is_predict) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->bbox2d != other.bbox2d) {
      return false;
    }
    if (this->extra_info != other.extra_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Obstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Obstacle_

// alias to use template instance with default allocator
using Obstacle =
  deva_perception_msgs::msg::Obstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::CONSTRUCTION_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::TRICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Obstacle_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE__STRUCT_HPP_

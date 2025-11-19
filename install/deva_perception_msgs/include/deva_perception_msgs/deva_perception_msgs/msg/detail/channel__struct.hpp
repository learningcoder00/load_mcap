// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.hpp"
// Member 'extra_info'
#include "deva_perception_msgs/msg/detail/extra_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__Channel __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__Channel __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Channel_
{
  using Type = Channel_<ContainerAllocator>;

  explicit Channel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    dimensions(_init),
    bbox2d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->score = 0.0;
      this->last_observation_depth = 0.0;
      this->type = 0ul;
    }
  }

  explicit Channel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    dimensions(_alloc, _init),
    bbox2d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->score = 0.0;
      this->last_observation_depth = 0.0;
      this->type = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _dimensions_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _dimensions_type dimensions;
  using _score_type =
    double;
  _score_type score;
  using _last_observation_depth_type =
    double;
  _last_observation_depth_type last_observation_depth;
  using _type_type =
    uint32_t;
  _type_type type;
  using _bbox2d_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _bbox2d_type bbox2d;
  using _extra_info_type =
    std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>>;
  _extra_info_type extra_info;

  // setters for named parameter idiom
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
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__last_observation_depth(
    const double & _arg)
  {
    this->last_observation_depth = _arg;
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
    const std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>> & _arg)
  {
    this->extra_info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t ETC =
    1u;
  static constexpr uint32_t MANUAL =
    2u;
  static constexpr uint32_t ETCORMANUAL =
    3u;
  static constexpr uint32_t CLOSE =
    4u;
  static constexpr uint32_t REVERSE =
    5u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::Channel_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::Channel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Channel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Channel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Channel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Channel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Channel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Channel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Channel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Channel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__Channel
    std::shared_ptr<deva_perception_msgs::msg::Channel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__Channel
    std::shared_ptr<deva_perception_msgs::msg::Channel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Channel_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->dimensions != other.dimensions) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->last_observation_depth != other.last_observation_depth) {
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
  bool operator!=(const Channel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Channel_

// alias to use template instance with default allocator
using Channel =
  deva_perception_msgs::msg::Channel_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Channel_<ContainerAllocator>::ETC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Channel_<ContainerAllocator>::MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Channel_<ContainerAllocator>::ETCORMANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Channel_<ContainerAllocator>::CLOSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Channel_<ContainerAllocator>::REVERSE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__STRUCT_HPP_

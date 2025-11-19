// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/SteeringArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center_point'
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__SteeringArrow __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__SteeringArrow __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringArrow_
{
  using Type = SteeringArrow_<ContainerAllocator>;

  explicit SteeringArrow_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->confidence = 0.0;
      this->center_line_id = 0l;
      this->property = 0;
    }
  }

  explicit SteeringArrow_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->confidence = 0.0;
      this->center_line_id = 0l;
      this->property = 0;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _center_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_point_type center_point;
  using _vertices_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _vertices_type vertices;
  using _center_line_id_type =
    int32_t;
  _center_line_id_type center_line_id;
  using _property_type =
    uint8_t;
  _property_type property;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__center_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center_point = _arg;
    return *this;
  }
  Type & set__vertices(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->vertices = _arg;
    return *this;
  }
  Type & set__center_line_id(
    const int32_t & _arg)
  {
    this->center_line_id = _arg;
    return *this;
  }
  Type & set__property(
    const uint8_t & _arg)
  {
    this->property = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t GUIDE_TURN =
    1u;
  static constexpr uint8_t GUIDE_TURN_THROUGH =
    2u;
  static constexpr uint8_t GUIDE_TURN_LEFT =
    3u;
  static constexpr uint8_t GUIDE_TURN_RIGHT =
    4u;
  static constexpr uint8_t GUIDE_LEFT =
    5u;
  static constexpr uint8_t GUIDE_LEFT_THROUGH =
    6u;
  static constexpr uint8_t GUIDE_LEFT_RIGHT =
    7u;
  static constexpr uint8_t GUIDE_LEFT_THROUGH_RIGHT =
    8u;
  static constexpr uint8_t GUIDE_THROUGH =
    9u;
  static constexpr uint8_t GUIDE_THROUGH_RIGHT =
    10u;
  static constexpr uint8_t GUIDE_RIGHT =
    11u;
  static constexpr uint8_t FORBID_TURN =
    12u;
  static constexpr uint8_t FORBID_LEFT =
    13u;
  static constexpr uint8_t FORBID_LEFT_RIGHT =
    14u;
  static constexpr uint8_t FORBID_THROUGH =
    15u;
  static constexpr uint8_t FORBID_THROUGH_RIGHT =
    16u;
  static constexpr uint8_t FORBID_THROUGH_LEFT =
    17u;
  static constexpr uint8_t FORBID_RIGHT =
    18u;
  static constexpr uint8_t MERGE_LEFT =
    19u;
  static constexpr uint8_t MERGE_RIGHT =
    20u;
  static constexpr uint8_t FORBID_LEFT_TURN =
    21u;
  static constexpr uint8_t BUS_LANE =
    22u;
  static constexpr uint8_t REVERSIBLE_LANE =
    23u;
  static constexpr uint8_t NONMOTOR_LANE =
    24u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__SteeringArrow
    std::shared_ptr<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__SteeringArrow
    std::shared_ptr<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringArrow_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->center_point != other.center_point) {
      return false;
    }
    if (this->vertices != other.vertices) {
      return false;
    }
    if (this->center_line_id != other.center_line_id) {
      return false;
    }
    if (this->property != other.property) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringArrow_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringArrow_

// alias to use template instance with default allocator
using SteeringArrow =
  deva_perception_msgs::msg::SteeringArrow_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_TURN_THROUGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_TURN_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_LEFT_THROUGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_LEFT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_LEFT_THROUGH_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_THROUGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_THROUGH_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::GUIDE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::FORBID_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::FORBID_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::FORBID_LEFT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::FORBID_THROUGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::FORBID_THROUGH_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::FORBID_THROUGH_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::FORBID_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::MERGE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::MERGE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::FORBID_LEFT_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::BUS_LANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::REVERSIBLE_LANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SteeringArrow_<ContainerAllocator>::NONMOTOR_LANE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__STRUCT_HPP_

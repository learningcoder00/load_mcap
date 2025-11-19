// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/USTBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'line_segments'
#include "deva_perception_msgs/msg/detail/edge_line_segment__struct.hpp"
// Member 'equation_curves'
#include "deva_perception_msgs/msg/detail/edge_equation_curve__struct.hpp"
// Member 'disperse_curves'
#include "deva_perception_msgs/msg/detail/edge_disperse_curve__struct.hpp"
// Member 'corner_points'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'waylink'
#include "deva_perception_msgs/msg/detail/way_link__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__USTBoundary __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__USTBoundary __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct USTBoundary_
{
  using Type = USTBoundary_<ContainerAllocator>;

  explicit USTBoundary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waylink(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->type = 0;
      this->segment_type = 0;
      this->is_stable_tracked = false;
    }
  }

  explicit USTBoundary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : waylink(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->type = 0;
      this->segment_type = 0;
      this->is_stable_tracked = false;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _segment_type_type =
    uint8_t;
  _segment_type_type segment_type;
  using _line_segments_type =
    std::vector<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>>>;
  _line_segments_type line_segments;
  using _equation_curves_type =
    std::vector<deva_perception_msgs::msg::EdgeEquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::EdgeEquationCurve_<ContainerAllocator>>>;
  _equation_curves_type equation_curves;
  using _disperse_curves_type =
    std::vector<deva_perception_msgs::msg::EdgeDisperseCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::EdgeDisperseCurve_<ContainerAllocator>>>;
  _disperse_curves_type disperse_curves;
  using _corner_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _corner_points_type corner_points;
  using _waylink_type =
    deva_perception_msgs::msg::WayLink_<ContainerAllocator>;
  _waylink_type waylink;
  using _is_stable_tracked_type =
    bool;
  _is_stable_tracked_type is_stable_tracked;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
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
  Type & set__segment_type(
    const uint8_t & _arg)
  {
    this->segment_type = _arg;
    return *this;
  }
  Type & set__line_segments(
    const std::vector<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>>> & _arg)
  {
    this->line_segments = _arg;
    return *this;
  }
  Type & set__equation_curves(
    const std::vector<deva_perception_msgs::msg::EdgeEquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::EdgeEquationCurve_<ContainerAllocator>>> & _arg)
  {
    this->equation_curves = _arg;
    return *this;
  }
  Type & set__disperse_curves(
    const std::vector<deva_perception_msgs::msg::EdgeDisperseCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::EdgeDisperseCurve_<ContainerAllocator>>> & _arg)
  {
    this->disperse_curves = _arg;
    return *this;
  }
  Type & set__corner_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->corner_points = _arg;
    return *this;
  }
  Type & set__waylink(
    const deva_perception_msgs::msg::WayLink_<ContainerAllocator> & _arg)
  {
    this->waylink = _arg;
    return *this;
  }
  Type & set__is_stable_tracked(
    const bool & _arg)
  {
    this->is_stable_tracked = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t STATIC_BOUNDARY =
    1u;
  static constexpr uint8_t CURB =
    2u;
  static constexpr uint8_t GUARDRAIL =
    3u;
  static constexpr uint8_t WALLEDGE =
    4u;
  static constexpr uint8_t CONE_LINE =
    5u;
  static constexpr uint8_t STOP_LINE =
    6u;
  static constexpr uint8_t LINE_SEGMENT =
    0u;
  static constexpr uint8_t EQUATION_CURVE =
    1u;
  static constexpr uint8_t DISPERSE_CURVE =
    2u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::USTBoundary_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::USTBoundary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__USTBoundary
    std::shared_ptr<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__USTBoundary
    std::shared_ptr<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const USTBoundary_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->segment_type != other.segment_type) {
      return false;
    }
    if (this->line_segments != other.line_segments) {
      return false;
    }
    if (this->equation_curves != other.equation_curves) {
      return false;
    }
    if (this->disperse_curves != other.disperse_curves) {
      return false;
    }
    if (this->corner_points != other.corner_points) {
      return false;
    }
    if (this->waylink != other.waylink) {
      return false;
    }
    if (this->is_stable_tracked != other.is_stable_tracked) {
      return false;
    }
    return true;
  }
  bool operator!=(const USTBoundary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct USTBoundary_

// alias to use template instance with default allocator
using USTBoundary =
  deva_perception_msgs::msg::USTBoundary_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::STATIC_BOUNDARY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::CURB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::GUARDRAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::WALLEDGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::CONE_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::STOP_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::LINE_SEGMENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::EQUATION_CURVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t USTBoundary_<ContainerAllocator>::DISPERSE_CURVE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__UST_BOUNDARY__STRUCT_HPP_

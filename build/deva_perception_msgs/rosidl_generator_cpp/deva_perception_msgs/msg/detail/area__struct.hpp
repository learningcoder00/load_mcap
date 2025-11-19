// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dims'
// Member 'corner_points'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'pose'
#include "deva_localization_msgs/msg/detail/pose__struct.hpp"
// Member 'line_segments'
#include "deva_perception_msgs/msg/detail/edge_line_segment__struct.hpp"
// Member 'equation_curves'
#include "deva_perception_msgs/msg/detail/edge_equation_curve__struct.hpp"
// Member 'disperse_curves'
#include "deva_perception_msgs/msg/detail/edge_disperse_curve__struct.hpp"
// Member 'direction_pixcoord'
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.hpp"
// Member 'static_obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__Area __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__Area __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Area_
{
  using Type = Area_<ContainerAllocator>;

  explicit Area_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dims(_init),
    pose(_init),
    direction_pixcoord(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->type = 0;
      this->segment_type = 0;
      this->confidence = 0.0f;
      this->depth_carcoord = 0.0f;
      this->is_occupied = false;
      this->is_stable_tracked = false;
      this->occupied_confidence = 0.0f;
    }
  }

  explicit Area_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dims(_alloc, _init),
    pose(_alloc, _init),
    direction_pixcoord(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->type = 0;
      this->segment_type = 0;
      this->confidence = 0.0f;
      this->depth_carcoord = 0.0f;
      this->is_occupied = false;
      this->is_stable_tracked = false;
      this->occupied_confidence = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _dims_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _dims_type dims;
  using _pose_type =
    deva_localization_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
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
  using _direction_pixcoord_type =
    deva_common_msgs::msg::Point2d_<ContainerAllocator>;
  _direction_pixcoord_type direction_pixcoord;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _depth_carcoord_type =
    float;
  _depth_carcoord_type depth_carcoord;
  using _is_occupied_type =
    bool;
  _is_occupied_type is_occupied;
  using _is_stable_tracked_type =
    bool;
  _is_stable_tracked_type is_stable_tracked;
  using _occupied_confidence_type =
    float;
  _occupied_confidence_type occupied_confidence;
  using _static_obstacles_type =
    std::vector<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>>;
  _static_obstacles_type static_obstacles;
  using _pixel_points_type =
    std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>>;
  _pixel_points_type pixel_points;

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
  Type & set__dims(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->dims = _arg;
    return *this;
  }
  Type & set__pose(
    const deva_localization_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
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
  Type & set__direction_pixcoord(
    const deva_common_msgs::msg::Point2d_<ContainerAllocator> & _arg)
  {
    this->direction_pixcoord = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__depth_carcoord(
    const float & _arg)
  {
    this->depth_carcoord = _arg;
    return *this;
  }
  Type & set__is_occupied(
    const bool & _arg)
  {
    this->is_occupied = _arg;
    return *this;
  }
  Type & set__is_stable_tracked(
    const bool & _arg)
  {
    this->is_stable_tracked = _arg;
    return *this;
  }
  Type & set__occupied_confidence(
    const float & _arg)
  {
    this->occupied_confidence = _arg;
    return *this;
  }
  Type & set__static_obstacles(
    const std::vector<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>> & _arg)
  {
    this->static_obstacles = _arg;
    return *this;
  }
  Type & set__pixel_points(
    const std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>> & _arg)
  {
    this->pixel_points = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CROSSWALK =
    1u;
  static constexpr uint8_t JUNCTION =
    2u;
  static constexpr uint8_t VERTICAL_SLOT =
    3u;
  static constexpr uint8_t SIDE_SLOT =
    4u;
  static constexpr uint8_t SLANTED_SLOT =
    5u;
  static constexpr uint8_t ULTRASONIC_VERTICAL_SLOT =
    6u;
  static constexpr uint8_t ULTRASONIC_SIDE_SLOT =
    7u;
  static constexpr uint8_t LINE_SEGMENT =
    0u;
  static constexpr uint8_t EQUATION_CURVE =
    1u;
  static constexpr uint8_t DISPERSE_CURVE =
    2u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::Area_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::Area_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Area_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Area_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Area_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Area_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Area_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Area_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Area_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Area_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__Area
    std::shared_ptr<deva_perception_msgs::msg::Area_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__Area
    std::shared_ptr<deva_perception_msgs::msg::Area_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Area_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->dims != other.dims) {
      return false;
    }
    if (this->pose != other.pose) {
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
    if (this->direction_pixcoord != other.direction_pixcoord) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->depth_carcoord != other.depth_carcoord) {
      return false;
    }
    if (this->is_occupied != other.is_occupied) {
      return false;
    }
    if (this->is_stable_tracked != other.is_stable_tracked) {
      return false;
    }
    if (this->occupied_confidence != other.occupied_confidence) {
      return false;
    }
    if (this->static_obstacles != other.static_obstacles) {
      return false;
    }
    if (this->pixel_points != other.pixel_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const Area_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Area_

// alias to use template instance with default allocator
using Area =
  deva_perception_msgs::msg::Area_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::CROSSWALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::JUNCTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::VERTICAL_SLOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::SIDE_SLOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::SLANTED_SLOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::ULTRASONIC_VERTICAL_SLOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::ULTRASONIC_SIDE_SLOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::LINE_SEGMENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::EQUATION_CURVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Area_<ContainerAllocator>::DISPERSE_CURVE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AREA__STRUCT_HPP_

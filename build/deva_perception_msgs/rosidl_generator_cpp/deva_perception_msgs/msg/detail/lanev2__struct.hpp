// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/Lanev2.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANEV2__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANEV2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'imagepoints'
// Member 'rv_fork_point'
#include "deva_common_msgs/msg/detail/point2d__struct.hpp"
// Member 'waypoints'
// Member 'waypoints_extend'
// Member 'bev_fork_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'lane_property_segment'
#include "deva_perception_msgs/msg/detail/lane_property_segment__struct.hpp"
// Member 'lane_xy'
// Member 'lane_xz'
#include "deva_common_msgs/msg/detail/line2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__Lanev2 __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__Lanev2 __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lanev2_
{
  using Type = Lanev2_<ContainerAllocator>;

  explicit Lanev2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_property_segment(_init),
    rv_fork_point(_init),
    bev_fork_point(_init),
    lane_xy(_init),
    lane_xz(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0;
      this->lane_id = 0ul;
      this->left_lane_id = 0ul;
      this->right_lane_id = 0ul;
      this->fork_lane_id = 0ul;
      this->v_min = 0ul;
      this->v_max = 0ul;
      this->x_min = 0.0;
      this->x_max = 0.0;
      this->x_min_extend = 0.0;
      this->x_max_extend = 0.0;
      this->lane_property = 0;
      this->fork_property = 0;
    }
  }

  explicit Lanev2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_property_segment(_alloc, _init),
    rv_fork_point(_alloc, _init),
    bev_fork_point(_alloc, _init),
    lane_xy(_alloc, _init),
    lane_xz(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0;
      this->lane_id = 0ul;
      this->left_lane_id = 0ul;
      this->right_lane_id = 0ul;
      this->fork_lane_id = 0ul;
      this->v_min = 0ul;
      this->v_max = 0ul;
      this->x_min = 0.0;
      this->x_max = 0.0;
      this->x_min_extend = 0.0;
      this->x_max_extend = 0.0;
      this->lane_property = 0;
      this->fork_property = 0;
    }
  }

  // field types and members
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _lane_id_type =
    uint32_t;
  _lane_id_type lane_id;
  using _left_lane_id_type =
    uint32_t;
  _left_lane_id_type left_lane_id;
  using _right_lane_id_type =
    uint32_t;
  _right_lane_id_type right_lane_id;
  using _fork_lane_id_type =
    uint32_t;
  _fork_lane_id_type fork_lane_id;
  using _imagepoints_type =
    std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>>;
  _imagepoints_type imagepoints;
  using _v_min_type =
    uint32_t;
  _v_min_type v_min;
  using _v_max_type =
    uint32_t;
  _v_max_type v_max;
  using _waypoints_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _x_min_type =
    double;
  _x_min_type x_min;
  using _x_max_type =
    double;
  _x_max_type x_max;
  using _waypoints_extend_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _waypoints_extend_type waypoints_extend;
  using _x_min_extend_type =
    double;
  _x_min_extend_type x_min_extend;
  using _x_max_extend_type =
    double;
  _x_max_extend_type x_max_extend;
  using _lane_property_type =
    uint8_t;
  _lane_property_type lane_property;
  using _lane_property_segment_type =
    deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator>;
  _lane_property_segment_type lane_property_segment;
  using _fork_property_type =
    uint8_t;
  _fork_property_type fork_property;
  using _rv_fork_point_type =
    deva_common_msgs::msg::Point2d_<ContainerAllocator>;
  _rv_fork_point_type rv_fork_point;
  using _bev_fork_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _bev_fork_point_type bev_fork_point;
  using _lane_xy_type =
    deva_common_msgs::msg::Line2d_<ContainerAllocator>;
  _lane_xy_type lane_xy;
  using _lane_xz_type =
    deva_common_msgs::msg::Line2d_<ContainerAllocator>;
  _lane_xz_type lane_xz;

  // setters for named parameter idiom
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__lane_id(
    const uint32_t & _arg)
  {
    this->lane_id = _arg;
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
  Type & set__fork_lane_id(
    const uint32_t & _arg)
  {
    this->fork_lane_id = _arg;
    return *this;
  }
  Type & set__imagepoints(
    const std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>> & _arg)
  {
    this->imagepoints = _arg;
    return *this;
  }
  Type & set__v_min(
    const uint32_t & _arg)
  {
    this->v_min = _arg;
    return *this;
  }
  Type & set__v_max(
    const uint32_t & _arg)
  {
    this->v_max = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__x_min(
    const double & _arg)
  {
    this->x_min = _arg;
    return *this;
  }
  Type & set__x_max(
    const double & _arg)
  {
    this->x_max = _arg;
    return *this;
  }
  Type & set__waypoints_extend(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->waypoints_extend = _arg;
    return *this;
  }
  Type & set__x_min_extend(
    const double & _arg)
  {
    this->x_min_extend = _arg;
    return *this;
  }
  Type & set__x_max_extend(
    const double & _arg)
  {
    this->x_max_extend = _arg;
    return *this;
  }
  Type & set__lane_property(
    const uint8_t & _arg)
  {
    this->lane_property = _arg;
    return *this;
  }
  Type & set__lane_property_segment(
    const deva_perception_msgs::msg::LanePropertySegment_<ContainerAllocator> & _arg)
  {
    this->lane_property_segment = _arg;
    return *this;
  }
  Type & set__fork_property(
    const uint8_t & _arg)
  {
    this->fork_property = _arg;
    return *this;
  }
  Type & set__rv_fork_point(
    const deva_common_msgs::msg::Point2d_<ContainerAllocator> & _arg)
  {
    this->rv_fork_point = _arg;
    return *this;
  }
  Type & set__bev_fork_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->bev_fork_point = _arg;
    return *this;
  }
  Type & set__lane_xy(
    const deva_common_msgs::msg::Line2d_<ContainerAllocator> & _arg)
  {
    this->lane_xy = _arg;
    return *this;
  }
  Type & set__lane_xz(
    const deva_common_msgs::msg::Line2d_<ContainerAllocator> & _arg)
  {
    this->lane_xz = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t DOTTED_YELLOW =
    1u;
  static constexpr uint8_t DOTTED_WHITE =
    2u;
  static constexpr uint8_t SOLID_YELLOW =
    3u;
  static constexpr uint8_t SOLID_WHITE =
    4u;
  static constexpr uint8_t DOUBLE_YELLOW =
    5u;
  static constexpr uint8_t CURB =
    6u;
  static constexpr uint8_t GUARDRAIL =
    7u;
  static constexpr uint8_t DOUBLE_DOTTED_SOLID_YELLOW =
    8u;
  static constexpr uint8_t DOUBLE_SOLID_DOTTED_YELLOW =
    9u;
  static constexpr uint8_t DOUBLE_DOTTED_SOLID_WHITE =
    10u;
  static constexpr uint8_t DOUBLE_SOLID_DOTTED_WHITE =
    11u;
  static constexpr uint8_t STOPLINE =
    12u;
  static constexpr uint8_t ROADEDGELANE =
    13u;
  static constexpr uint8_t DOUBLEROADEDGELANE =
    14u;
  static constexpr uint8_t DIVERSIONLINE =
    15u;
  static constexpr uint8_t JUNCTION_GUIDING_LINE =
    16u;
  static constexpr uint8_t LEFT_TURN_WAITING_ZONE =
    17u;
  static constexpr uint8_t HERRING_PATTERN =
    18u;
  static constexpr uint8_t SERRATED_LINE =
    19u;
  static constexpr uint8_t NORMAL =
    0u;
  static constexpr uint8_t SPLIT =
    1u;
  static constexpr uint8_t MERGE =
    2u;
  static constexpr uint8_t SPLIT_DIVERSION =
    3u;
  static constexpr uint8_t MERGE_DIVERSION =
    4u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::Lanev2_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::Lanev2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Lanev2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Lanev2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Lanev2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Lanev2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Lanev2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Lanev2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Lanev2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Lanev2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__Lanev2
    std::shared_ptr<deva_perception_msgs::msg::Lanev2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__Lanev2
    std::shared_ptr<deva_perception_msgs::msg::Lanev2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lanev2_ & other) const
  {
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->left_lane_id != other.left_lane_id) {
      return false;
    }
    if (this->right_lane_id != other.right_lane_id) {
      return false;
    }
    if (this->fork_lane_id != other.fork_lane_id) {
      return false;
    }
    if (this->imagepoints != other.imagepoints) {
      return false;
    }
    if (this->v_min != other.v_min) {
      return false;
    }
    if (this->v_max != other.v_max) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->x_min != other.x_min) {
      return false;
    }
    if (this->x_max != other.x_max) {
      return false;
    }
    if (this->waypoints_extend != other.waypoints_extend) {
      return false;
    }
    if (this->x_min_extend != other.x_min_extend) {
      return false;
    }
    if (this->x_max_extend != other.x_max_extend) {
      return false;
    }
    if (this->lane_property != other.lane_property) {
      return false;
    }
    if (this->lane_property_segment != other.lane_property_segment) {
      return false;
    }
    if (this->fork_property != other.fork_property) {
      return false;
    }
    if (this->rv_fork_point != other.rv_fork_point) {
      return false;
    }
    if (this->bev_fork_point != other.bev_fork_point) {
      return false;
    }
    if (this->lane_xy != other.lane_xy) {
      return false;
    }
    if (this->lane_xz != other.lane_xz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lanev2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lanev2_

// alias to use template instance with default allocator
using Lanev2 =
  deva_perception_msgs::msg::Lanev2_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DOTTED_YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DOTTED_WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::SOLID_YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::SOLID_WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DOUBLE_YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::CURB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::GUARDRAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DOUBLE_DOTTED_SOLID_YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DOUBLE_SOLID_DOTTED_YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DOUBLE_DOTTED_SOLID_WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DOUBLE_SOLID_DOTTED_WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::STOPLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::ROADEDGELANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DOUBLEROADEDGELANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::DIVERSIONLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::JUNCTION_GUIDING_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::LEFT_TURN_WAITING_ZONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::HERRING_PATTERN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::SERRATED_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::SPLIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::MERGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::SPLIT_DIVERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Lanev2_<ContainerAllocator>::MERGE_DIVERSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANEV2__STRUCT_HPP_

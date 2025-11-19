// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/STBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'equation_curves'
// Member 'extend_equation_curve'
#include "deva_common_msgs/msg/detail/equation_curve__struct.hpp"
// Member 'disperse_curve'
// Member 'extend_disperse_curve'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'lane_type'
#include "deva_perception_msgs/msg/detail/lane_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__STBoundary __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__STBoundary __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct STBoundary_
{
  using Type = STBoundary_<ContainerAllocator>;

  explicit STBoundary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : extend_equation_curve(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_equation = false;
      this->has_disperse = false;
      this->has_extend_equation = false;
      this->has_extend_disperse = false;
      this->position = 0;
      this->id = 0l;
      this->left_id = 0l;
      this->right_id = 0l;
      this->confidence = 0.0f;
      this->reserve = 0l;
      this->global_track_id = 0l;
    }
  }

  explicit STBoundary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : extend_equation_curve(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_equation = false;
      this->has_disperse = false;
      this->has_extend_equation = false;
      this->has_extend_disperse = false;
      this->position = 0;
      this->id = 0l;
      this->left_id = 0l;
      this->right_id = 0l;
      this->confidence = 0.0f;
      this->reserve = 0l;
      this->global_track_id = 0l;
    }
  }

  // field types and members
  using _has_equation_type =
    bool;
  _has_equation_type has_equation;
  using _equation_curves_type =
    std::vector<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>>;
  _equation_curves_type equation_curves;
  using _has_disperse_type =
    bool;
  _has_disperse_type has_disperse;
  using _disperse_curve_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _disperse_curve_type disperse_curve;
  using _has_extend_equation_type =
    bool;
  _has_extend_equation_type has_extend_equation;
  using _extend_equation_curve_type =
    deva_common_msgs::msg::EquationCurve_<ContainerAllocator>;
  _extend_equation_curve_type extend_equation_curve;
  using _has_extend_disperse_type =
    bool;
  _has_extend_disperse_type has_extend_disperse;
  using _extend_disperse_curve_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _extend_disperse_curve_type extend_disperse_curve;
  using _lane_type_type =
    std::vector<deva_perception_msgs::msg::LaneType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::LaneType_<ContainerAllocator>>>;
  _lane_type_type lane_type;
  using _position_type =
    int8_t;
  _position_type position;
  using _id_type =
    int32_t;
  _id_type id;
  using _left_id_type =
    int32_t;
  _left_id_type left_id;
  using _right_id_type =
    int32_t;
  _right_id_type right_id;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _reserve_type =
    int32_t;
  _reserve_type reserve;
  using _global_track_id_type =
    int32_t;
  _global_track_id_type global_track_id;

  // setters for named parameter idiom
  Type & set__has_equation(
    const bool & _arg)
  {
    this->has_equation = _arg;
    return *this;
  }
  Type & set__equation_curves(
    const std::vector<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::EquationCurve_<ContainerAllocator>>> & _arg)
  {
    this->equation_curves = _arg;
    return *this;
  }
  Type & set__has_disperse(
    const bool & _arg)
  {
    this->has_disperse = _arg;
    return *this;
  }
  Type & set__disperse_curve(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->disperse_curve = _arg;
    return *this;
  }
  Type & set__has_extend_equation(
    const bool & _arg)
  {
    this->has_extend_equation = _arg;
    return *this;
  }
  Type & set__extend_equation_curve(
    const deva_common_msgs::msg::EquationCurve_<ContainerAllocator> & _arg)
  {
    this->extend_equation_curve = _arg;
    return *this;
  }
  Type & set__has_extend_disperse(
    const bool & _arg)
  {
    this->has_extend_disperse = _arg;
    return *this;
  }
  Type & set__extend_disperse_curve(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->extend_disperse_curve = _arg;
    return *this;
  }
  Type & set__lane_type(
    const std::vector<deva_perception_msgs::msg::LaneType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::LaneType_<ContainerAllocator>>> & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__position(
    const int8_t & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__left_id(
    const int32_t & _arg)
  {
    this->left_id = _arg;
    return *this;
  }
  Type & set__right_id(
    const int32_t & _arg)
  {
    this->right_id = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__reserve(
    const int32_t & _arg)
  {
    this->reserve = _arg;
    return *this;
  }
  Type & set__global_track_id(
    const int32_t & _arg)
  {
    this->global_track_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t POSITION_BOLLARD_LEFT =
    -5;
  static constexpr int8_t POSITION_FOURTH_LEFT =
    -4;
  static constexpr int8_t POSITION_THIRD_LEFT =
    -3;
  static constexpr int8_t POSITION_ADJACENT_LEFT =
    -2;
  static constexpr int8_t POSITION_EGO_LEFT =
    -1;
  static constexpr int8_t POSITION_EGO_RIGHT =
    1;
  static constexpr int8_t POSITION_ADJACENT_RIGHT =
    2;
  static constexpr int8_t POSITION_THIRD_RIGHT =
    3;
  static constexpr int8_t POSITION_FOURTH_RIGHT =
    4;
  static constexpr int8_t POSITION_BOLLARD_RIGHT =
    5;
  static constexpr int8_t POSITION_OTHER =
    6;
  static constexpr int8_t POSITION_UNKNOWN =
    7;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::STBoundary_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::STBoundary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::STBoundary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::STBoundary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::STBoundary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::STBoundary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::STBoundary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::STBoundary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::STBoundary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::STBoundary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__STBoundary
    std::shared_ptr<deva_perception_msgs::msg::STBoundary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__STBoundary
    std::shared_ptr<deva_perception_msgs::msg::STBoundary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const STBoundary_ & other) const
  {
    if (this->has_equation != other.has_equation) {
      return false;
    }
    if (this->equation_curves != other.equation_curves) {
      return false;
    }
    if (this->has_disperse != other.has_disperse) {
      return false;
    }
    if (this->disperse_curve != other.disperse_curve) {
      return false;
    }
    if (this->has_extend_equation != other.has_extend_equation) {
      return false;
    }
    if (this->extend_equation_curve != other.extend_equation_curve) {
      return false;
    }
    if (this->has_extend_disperse != other.has_extend_disperse) {
      return false;
    }
    if (this->extend_disperse_curve != other.extend_disperse_curve) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->left_id != other.left_id) {
      return false;
    }
    if (this->right_id != other.right_id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->reserve != other.reserve) {
      return false;
    }
    if (this->global_track_id != other.global_track_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const STBoundary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct STBoundary_

// alias to use template instance with default allocator
using STBoundary =
  deva_perception_msgs::msg::STBoundary_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_BOLLARD_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_FOURTH_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_THIRD_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_ADJACENT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_EGO_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_EGO_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_ADJACENT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_THIRD_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_FOURTH_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_BOLLARD_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_OTHER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t STBoundary_<ContainerAllocator>::POSITION_UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ST_BOUNDARY__STRUCT_HPP_

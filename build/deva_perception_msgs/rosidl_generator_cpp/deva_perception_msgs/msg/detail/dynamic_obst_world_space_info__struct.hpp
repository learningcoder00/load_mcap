// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/DynamicObstWorldSpaceInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poly'
// Member 'poly_vcs'
#include "deva_perception_msgs/msg/detail/polygon__struct.hpp"
// Member 'position'
// Member 'vel'
// Member 'vel_abs_world'
// Member 'acc'
// Member 'acc_abs_world'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__DynamicObstWorldSpaceInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__DynamicObstWorldSpaceInfo __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicObstWorldSpaceInfo_
{
  using Type = DynamicObstWorldSpaceInfo_<ContainerAllocator>;

  explicit DynamicObstWorldSpaceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : poly(_init),
    poly_vcs(_init),
    position(_init),
    vel(_init),
    vel_abs_world(_init),
    acc(_init),
    acc_abs_world(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->length = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->ttc = 0.0f;
      this->motion_status = 0;
      this->yaw_rate = 0.0f;
      this->sigma_yaw = 0.0f;
      this->sigma_width = 0.0f;
      this->sigma_height = 0.0f;
      this->sigma_length = 0.0f;
      this->sigma_yaw_rate = 0.0f;
      this->lane_assignment = 0;
      this->cipv = 0;
    }
  }

  explicit DynamicObstWorldSpaceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : poly(_alloc, _init),
    poly_vcs(_alloc, _init),
    position(_alloc, _init),
    vel(_alloc, _init),
    vel_abs_world(_alloc, _init),
    acc(_alloc, _init),
    acc_abs_world(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->length = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->ttc = 0.0f;
      this->motion_status = 0;
      this->yaw_rate = 0.0f;
      this->sigma_yaw = 0.0f;
      this->sigma_width = 0.0f;
      this->sigma_height = 0.0f;
      this->sigma_length = 0.0f;
      this->sigma_yaw_rate = 0.0f;
      this->lane_assignment = 0;
      this->cipv = 0;
    }
  }

  // field types and members
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;
  using _height_type =
    float;
  _height_type height;
  using _poly_type =
    deva_perception_msgs::msg::Polygon_<ContainerAllocator>;
  _poly_type poly;
  using _poly_vcs_type =
    deva_perception_msgs::msg::Polygon_<ContainerAllocator>;
  _poly_vcs_type poly_vcs;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _ttc_type =
    float;
  _ttc_type ttc;
  using _vel_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _vel_type vel;
  using _vel_abs_world_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _vel_abs_world_type vel_abs_world;
  using _acc_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _acc_type acc;
  using _acc_abs_world_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _acc_abs_world_type acc_abs_world;
  using _motion_status_type =
    uint8_t;
  _motion_status_type motion_status;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _sigma_vel_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _sigma_vel_type sigma_vel;
  using _sigma_yaw_type =
    float;
  _sigma_yaw_type sigma_yaw;
  using _sigma_width_type =
    float;
  _sigma_width_type sigma_width;
  using _sigma_height_type =
    float;
  _sigma_height_type sigma_height;
  using _sigma_length_type =
    float;
  _sigma_length_type sigma_length;
  using _sigma_position_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _sigma_position_type sigma_position;
  using _sigma_yaw_rate_type =
    float;
  _sigma_yaw_rate_type sigma_yaw_rate;
  using _lane_assignment_type =
    int8_t;
  _lane_assignment_type lane_assignment;
  using _cipv_type =
    int8_t;
  _cipv_type cipv;

  // setters for named parameter idiom
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__poly(
    const deva_perception_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->poly = _arg;
    return *this;
  }
  Type & set__poly_vcs(
    const deva_perception_msgs::msg::Polygon_<ContainerAllocator> & _arg)
  {
    this->poly_vcs = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__ttc(
    const float & _arg)
  {
    this->ttc = _arg;
    return *this;
  }
  Type & set__vel(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__vel_abs_world(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->vel_abs_world = _arg;
    return *this;
  }
  Type & set__acc(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__acc_abs_world(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->acc_abs_world = _arg;
    return *this;
  }
  Type & set__motion_status(
    const uint8_t & _arg)
  {
    this->motion_status = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__sigma_vel(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->sigma_vel = _arg;
    return *this;
  }
  Type & set__sigma_yaw(
    const float & _arg)
  {
    this->sigma_yaw = _arg;
    return *this;
  }
  Type & set__sigma_width(
    const float & _arg)
  {
    this->sigma_width = _arg;
    return *this;
  }
  Type & set__sigma_height(
    const float & _arg)
  {
    this->sigma_height = _arg;
    return *this;
  }
  Type & set__sigma_length(
    const float & _arg)
  {
    this->sigma_length = _arg;
    return *this;
  }
  Type & set__sigma_position(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->sigma_position = _arg;
    return *this;
  }
  Type & set__sigma_yaw_rate(
    const float & _arg)
  {
    this->sigma_yaw_rate = _arg;
    return *this;
  }
  Type & set__lane_assignment(
    const int8_t & _arg)
  {
    this->lane_assignment = _arg;
    return *this;
  }
  Type & set__cipv(
    const int8_t & _arg)
  {
    this->cipv = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INVALID =
    0u;
  static constexpr uint8_t UNKNOWN =
    1u;
  static constexpr uint8_t MOVING =
    2u;
  static constexpr uint8_t STATIONARY =
    3u;
  static constexpr uint8_t STOPPED =
    4u;
  static constexpr uint8_t MOVING_SLOWLY =
    5u;
  static constexpr uint8_t ENUM_SIZE =
    6u;
  static constexpr int8_t LEFT_NEXT_NEXT =
    -2;
  static constexpr int8_t LEFT_NEXT =
    -1;
  static constexpr int8_t EGOLANE =
    0;
  static constexpr int8_t RIGHT_NEXT =
    1;
  static constexpr int8_t RIGHT_NEXT_NEXT =
    2;
  static constexpr int8_t LANE_UNKNOWN =
    3;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__DynamicObstWorldSpaceInfo
    std::shared_ptr<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__DynamicObstWorldSpaceInfo
    std::shared_ptr<deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicObstWorldSpaceInfo_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->poly != other.poly) {
      return false;
    }
    if (this->poly_vcs != other.poly_vcs) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->ttc != other.ttc) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->vel_abs_world != other.vel_abs_world) {
      return false;
    }
    if (this->acc != other.acc) {
      return false;
    }
    if (this->acc_abs_world != other.acc_abs_world) {
      return false;
    }
    if (this->motion_status != other.motion_status) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->sigma_vel != other.sigma_vel) {
      return false;
    }
    if (this->sigma_yaw != other.sigma_yaw) {
      return false;
    }
    if (this->sigma_width != other.sigma_width) {
      return false;
    }
    if (this->sigma_height != other.sigma_height) {
      return false;
    }
    if (this->sigma_length != other.sigma_length) {
      return false;
    }
    if (this->sigma_position != other.sigma_position) {
      return false;
    }
    if (this->sigma_yaw_rate != other.sigma_yaw_rate) {
      return false;
    }
    if (this->lane_assignment != other.lane_assignment) {
      return false;
    }
    if (this->cipv != other.cipv) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicObstWorldSpaceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicObstWorldSpaceInfo_

// alias to use template instance with default allocator
using DynamicObstWorldSpaceInfo =
  deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::STATIONARY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::STOPPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::MOVING_SLOWLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::ENUM_SIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::LEFT_NEXT_NEXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::LEFT_NEXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::EGOLANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::RIGHT_NEXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::RIGHT_NEXT_NEXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DynamicObstWorldSpaceInfo_<ContainerAllocator>::LANE_UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__STRUCT_HPP_

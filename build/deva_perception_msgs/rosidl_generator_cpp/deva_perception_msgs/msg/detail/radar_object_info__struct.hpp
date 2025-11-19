// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RadarObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'position_std'
// Member 'nearest_point'
// Member 'nearest_point_std'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity_rel'
// Member 'velocity_rel_std'
// Member 'velocity_abs'
// Member 'velocity_abs_std'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'acceleration_rel'
// Member 'acceleration_abs'
#include "geometry_msgs/msg/detail/accel__struct.hpp"
// Member 'box_lwh'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RadarObjectInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RadarObjectInfo __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarObjectInfo_
{
  using Type = RadarObjectInfo_<ContainerAllocator>;

  explicit RadarObjectInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    position_std(_init),
    nearest_point(_init),
    nearest_point_std(_init),
    velocity_rel(_init),
    velocity_rel_std(_init),
    velocity_abs(_init),
    velocity_abs_std(_init),
    acceleration_rel(_init),
    acceleration_abs(_init),
    box_lwh(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->dynamic_property = 0ul;
      this->heading_angle = 0.0;
      this->life_cycles = 0ul;
      this->box_center_lat = 0.0;
      this->box_center_lgt = 0.0;
      this->snr = 0.0;
      this->classification = 0ul;
      this->obstacle_probability = 0.0;
      this->probability_of_existence = 0.0;
      this->mirror_probability = 0.0;
      this->not_real_probability = 0.0;
      this->rcs = 0.0;
      this->target_classification_confidence = 0.0;
      this->track_status = 0ul;
    }
  }

  explicit RadarObjectInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    position_std(_alloc, _init),
    nearest_point(_alloc, _init),
    nearest_point_std(_alloc, _init),
    velocity_rel(_alloc, _init),
    velocity_rel_std(_alloc, _init),
    velocity_abs(_alloc, _init),
    velocity_abs_std(_alloc, _init),
    acceleration_rel(_alloc, _init),
    acceleration_abs(_alloc, _init),
    box_lwh(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->dynamic_property = 0ul;
      this->heading_angle = 0.0;
      this->life_cycles = 0ul;
      this->box_center_lat = 0.0;
      this->box_center_lgt = 0.0;
      this->snr = 0.0;
      this->classification = 0ul;
      this->obstacle_probability = 0.0;
      this->probability_of_existence = 0.0;
      this->mirror_probability = 0.0;
      this->not_real_probability = 0.0;
      this->rcs = 0.0;
      this->target_classification_confidence = 0.0;
      this->track_status = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _position_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _position_type position;
  using _position_std_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _position_std_type position_std;
  using _nearest_point_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _nearest_point_type nearest_point;
  using _nearest_point_std_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _nearest_point_std_type nearest_point_std;
  using _velocity_rel_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_rel_type velocity_rel;
  using _velocity_rel_std_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_rel_std_type velocity_rel_std;
  using _velocity_abs_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_abs_type velocity_abs;
  using _velocity_abs_std_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_abs_std_type velocity_abs_std;
  using _acceleration_rel_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_rel_type acceleration_rel;
  using _acceleration_abs_type =
    geometry_msgs::msg::Accel_<ContainerAllocator>;
  _acceleration_abs_type acceleration_abs;
  using _dynamic_property_type =
    uint32_t;
  _dynamic_property_type dynamic_property;
  using _heading_angle_type =
    double;
  _heading_angle_type heading_angle;
  using _life_cycles_type =
    uint32_t;
  _life_cycles_type life_cycles;
  using _box_lwh_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _box_lwh_type box_lwh;
  using _box_center_lat_type =
    double;
  _box_center_lat_type box_center_lat;
  using _box_center_lgt_type =
    double;
  _box_center_lgt_type box_center_lgt;
  using _snr_type =
    double;
  _snr_type snr;
  using _classification_type =
    uint32_t;
  _classification_type classification;
  using _obstacle_probability_type =
    double;
  _obstacle_probability_type obstacle_probability;
  using _probability_of_existence_type =
    double;
  _probability_of_existence_type probability_of_existence;
  using _mirror_probability_type =
    double;
  _mirror_probability_type mirror_probability;
  using _not_real_probability_type =
    double;
  _not_real_probability_type not_real_probability;
  using _rcs_type =
    double;
  _rcs_type rcs;
  using _target_classification_confidence_type =
    double;
  _target_classification_confidence_type target_classification_confidence;
  using _track_status_type =
    uint32_t;
  _track_status_type track_status;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__position_std(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->position_std = _arg;
    return *this;
  }
  Type & set__nearest_point(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->nearest_point = _arg;
    return *this;
  }
  Type & set__nearest_point_std(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->nearest_point_std = _arg;
    return *this;
  }
  Type & set__velocity_rel(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_rel = _arg;
    return *this;
  }
  Type & set__velocity_rel_std(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_rel_std = _arg;
    return *this;
  }
  Type & set__velocity_abs(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_abs = _arg;
    return *this;
  }
  Type & set__velocity_abs_std(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity_abs_std = _arg;
    return *this;
  }
  Type & set__acceleration_rel(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration_rel = _arg;
    return *this;
  }
  Type & set__acceleration_abs(
    const geometry_msgs::msg::Accel_<ContainerAllocator> & _arg)
  {
    this->acceleration_abs = _arg;
    return *this;
  }
  Type & set__dynamic_property(
    const uint32_t & _arg)
  {
    this->dynamic_property = _arg;
    return *this;
  }
  Type & set__heading_angle(
    const double & _arg)
  {
    this->heading_angle = _arg;
    return *this;
  }
  Type & set__life_cycles(
    const uint32_t & _arg)
  {
    this->life_cycles = _arg;
    return *this;
  }
  Type & set__box_lwh(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->box_lwh = _arg;
    return *this;
  }
  Type & set__box_center_lat(
    const double & _arg)
  {
    this->box_center_lat = _arg;
    return *this;
  }
  Type & set__box_center_lgt(
    const double & _arg)
  {
    this->box_center_lgt = _arg;
    return *this;
  }
  Type & set__snr(
    const double & _arg)
  {
    this->snr = _arg;
    return *this;
  }
  Type & set__classification(
    const uint32_t & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__obstacle_probability(
    const double & _arg)
  {
    this->obstacle_probability = _arg;
    return *this;
  }
  Type & set__probability_of_existence(
    const double & _arg)
  {
    this->probability_of_existence = _arg;
    return *this;
  }
  Type & set__mirror_probability(
    const double & _arg)
  {
    this->mirror_probability = _arg;
    return *this;
  }
  Type & set__not_real_probability(
    const double & _arg)
  {
    this->not_real_probability = _arg;
    return *this;
  }
  Type & set__rcs(
    const double & _arg)
  {
    this->rcs = _arg;
    return *this;
  }
  Type & set__target_classification_confidence(
    const double & _arg)
  {
    this->target_classification_confidence = _arg;
    return *this;
  }
  Type & set__track_status(
    const uint32_t & _arg)
  {
    this->track_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MNTPAT_UNKNOWN =
    0u;
  static constexpr uint8_t MNTPAT_STATIONARY =
    1u;
  static constexpr uint8_t MNTPAT_STATIONARY_FROM_MOVING =
    2u;
  static constexpr uint8_t MNTPAT_MOVING =
    3u;
  static constexpr uint8_t MNTPAT_RECEDING =
    4u;
  static constexpr uint8_t MNTPAT_ONCOMING =
    5u;
  static constexpr uint8_t MNTPAT_CROSSINGN_FROM_LE =
    6u;
  static constexpr uint8_t MNTPAT_CROSSINGN_FROM_RI =
    7u;
  static constexpr uint8_t MNTPAT_CROSSINGN_STATIONARY =
    8u;
  static constexpr uint8_t MNTPAT_STOPED =
    9u;
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t POINT =
    1u;
  static constexpr uint8_t CAR =
    2u;
  static constexpr uint8_t TRUCK =
    3u;
  static constexpr uint8_t PEDESTRIAN =
    4u;
  static constexpr uint8_t BICYCLE =
    5u;
  static constexpr uint8_t WIDE =
    6u;
  static constexpr uint8_t MOTORCYCLE =
    7u;
  static constexpr uint8_t VEHICLE_UNKNOWN_CLASS =
    8u;
  static constexpr uint8_t ANIMAL =
    9u;
  static constexpr uint8_t TRACK_STATUS_INVALID =
    0u;
  static constexpr uint8_t TRACK_STATUS_UPDATED =
    1u;
  static constexpr uint8_t TRACK_STATUS_NEW =
    2u;
  static constexpr uint8_t TRACK_STATUS_COASTED =
    3u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RadarObjectInfo
    std::shared_ptr<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RadarObjectInfo
    std::shared_ptr<deva_perception_msgs::msg::RadarObjectInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarObjectInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->position_std != other.position_std) {
      return false;
    }
    if (this->nearest_point != other.nearest_point) {
      return false;
    }
    if (this->nearest_point_std != other.nearest_point_std) {
      return false;
    }
    if (this->velocity_rel != other.velocity_rel) {
      return false;
    }
    if (this->velocity_rel_std != other.velocity_rel_std) {
      return false;
    }
    if (this->velocity_abs != other.velocity_abs) {
      return false;
    }
    if (this->velocity_abs_std != other.velocity_abs_std) {
      return false;
    }
    if (this->acceleration_rel != other.acceleration_rel) {
      return false;
    }
    if (this->acceleration_abs != other.acceleration_abs) {
      return false;
    }
    if (this->dynamic_property != other.dynamic_property) {
      return false;
    }
    if (this->heading_angle != other.heading_angle) {
      return false;
    }
    if (this->life_cycles != other.life_cycles) {
      return false;
    }
    if (this->box_lwh != other.box_lwh) {
      return false;
    }
    if (this->box_center_lat != other.box_center_lat) {
      return false;
    }
    if (this->box_center_lgt != other.box_center_lgt) {
      return false;
    }
    if (this->snr != other.snr) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->obstacle_probability != other.obstacle_probability) {
      return false;
    }
    if (this->probability_of_existence != other.probability_of_existence) {
      return false;
    }
    if (this->mirror_probability != other.mirror_probability) {
      return false;
    }
    if (this->not_real_probability != other.not_real_probability) {
      return false;
    }
    if (this->rcs != other.rcs) {
      return false;
    }
    if (this->target_classification_confidence != other.target_classification_confidence) {
      return false;
    }
    if (this->track_status != other.track_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarObjectInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarObjectInfo_

// alias to use template instance with default allocator
using RadarObjectInfo =
  deva_perception_msgs::msg::RadarObjectInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_STATIONARY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_STATIONARY_FROM_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_RECEDING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_ONCOMING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_CROSSINGN_FROM_LE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_CROSSINGN_FROM_RI;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_CROSSINGN_STATIONARY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MNTPAT_STOPED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::WIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::VEHICLE_UNKNOWN_CLASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::ANIMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::TRACK_STATUS_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::TRACK_STATUS_UPDATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::TRACK_STATUS_NEW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RadarObjectInfo_<ContainerAllocator>::TRACK_STATUS_COASTED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT_INFO__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/DynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.hpp"
// Member 'head_bbox'
// Member 'tail_bbox'
// Member 'ped_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.hpp"
// Member 'subclassification_type'
#include "deva_perception_msgs/msg/detail/subclassification_type__struct.hpp"
// Member 'ground_points'
#include "deva_common_msgs/msg/detail/ground_point__struct.hpp"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__DynamicObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__DynamicObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicObstacle_
{
  using Type = DynamicObstacle_<ContainerAllocator>;

  explicit DynamicObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_init),
    head_bbox(_init),
    tail_bbox(_init),
    ped_bbox(_init),
    subclassification_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dynamic_obstacle_type = 0;
      this->det_score = 0.0f;
      this->subclass_score = 0.0f;
      this->light_valid = false;
      this->turn_type = 0;
      this->turn_score = 0.0f;
      this->brake_type = 0;
      this->brake_score = 0.0f;
      this->hazard_type = 0;
      this->hazard_score = 0.0f;
      this->full_occ_score = 0.0f;
      this->head_occ_score = 0.0f;
      this->tail_occ_score = 0.0f;
      this->full_trunc_score = 0.0f;
      this->head_trunc_score = 0.0f;
      this->tail_trunc_score = 0.0f;
      this->source = 0;
    }
  }

  explicit DynamicObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_alloc, _init),
    head_bbox(_alloc, _init),
    tail_bbox(_alloc, _init),
    ped_bbox(_alloc, _init),
    subclassification_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dynamic_obstacle_type = 0;
      this->det_score = 0.0f;
      this->subclass_score = 0.0f;
      this->light_valid = false;
      this->turn_type = 0;
      this->turn_score = 0.0f;
      this->brake_type = 0;
      this->brake_score = 0.0f;
      this->hazard_type = 0;
      this->hazard_score = 0.0f;
      this->full_occ_score = 0.0f;
      this->head_occ_score = 0.0f;
      this->tail_occ_score = 0.0f;
      this->full_trunc_score = 0.0f;
      this->head_trunc_score = 0.0f;
      this->tail_trunc_score = 0.0f;
      this->source = 0;
    }
  }

  // field types and members
  using _obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _dynamic_obstacle_type_type =
    uint8_t;
  _dynamic_obstacle_type_type dynamic_obstacle_type;
  using _det_score_type =
    float;
  _det_score_type det_score;
  using _head_bbox_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _head_bbox_type head_bbox;
  using _tail_bbox_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _tail_bbox_type tail_bbox;
  using _ped_bbox_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _ped_bbox_type ped_bbox;
  using _subclassification_type_type =
    deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator>;
  _subclassification_type_type subclassification_type;
  using _subclass_score_type =
    float;
  _subclass_score_type subclass_score;
  using _light_valid_type =
    bool;
  _light_valid_type light_valid;
  using _turn_type_type =
    uint8_t;
  _turn_type_type turn_type;
  using _turn_score_type =
    float;
  _turn_score_type turn_score;
  using _brake_type_type =
    uint8_t;
  _brake_type_type brake_type;
  using _brake_score_type =
    float;
  _brake_score_type brake_score;
  using _hazard_type_type =
    uint8_t;
  _hazard_type_type hazard_type;
  using _hazard_score_type =
    float;
  _hazard_score_type hazard_score;
  using _ground_points_type =
    std::vector<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>>;
  _ground_points_type ground_points;
  using _full_occ_score_type =
    float;
  _full_occ_score_type full_occ_score;
  using _head_occ_score_type =
    float;
  _head_occ_score_type head_occ_score;
  using _tail_occ_score_type =
    float;
  _tail_occ_score_type tail_occ_score;
  using _full_trunc_score_type =
    float;
  _full_trunc_score_type full_trunc_score;
  using _head_trunc_score_type =
    float;
  _head_trunc_score_type head_trunc_score;
  using _tail_trunc_score_type =
    float;
  _tail_trunc_score_type tail_trunc_score;
  using _source_type =
    uint8_t;
  _source_type source;
  using _match_indices_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _match_indices_type match_indices;
  using _extra_infos_type =
    std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>>;
  _extra_infos_type extra_infos;

  // setters for named parameter idiom
  Type & set__obstacle(
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__dynamic_obstacle_type(
    const uint8_t & _arg)
  {
    this->dynamic_obstacle_type = _arg;
    return *this;
  }
  Type & set__det_score(
    const float & _arg)
  {
    this->det_score = _arg;
    return *this;
  }
  Type & set__head_bbox(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->head_bbox = _arg;
    return *this;
  }
  Type & set__tail_bbox(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->tail_bbox = _arg;
    return *this;
  }
  Type & set__ped_bbox(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->ped_bbox = _arg;
    return *this;
  }
  Type & set__subclassification_type(
    const deva_perception_msgs::msg::SubclassificationType_<ContainerAllocator> & _arg)
  {
    this->subclassification_type = _arg;
    return *this;
  }
  Type & set__subclass_score(
    const float & _arg)
  {
    this->subclass_score = _arg;
    return *this;
  }
  Type & set__light_valid(
    const bool & _arg)
  {
    this->light_valid = _arg;
    return *this;
  }
  Type & set__turn_type(
    const uint8_t & _arg)
  {
    this->turn_type = _arg;
    return *this;
  }
  Type & set__turn_score(
    const float & _arg)
  {
    this->turn_score = _arg;
    return *this;
  }
  Type & set__brake_type(
    const uint8_t & _arg)
  {
    this->brake_type = _arg;
    return *this;
  }
  Type & set__brake_score(
    const float & _arg)
  {
    this->brake_score = _arg;
    return *this;
  }
  Type & set__hazard_type(
    const uint8_t & _arg)
  {
    this->hazard_type = _arg;
    return *this;
  }
  Type & set__hazard_score(
    const float & _arg)
  {
    this->hazard_score = _arg;
    return *this;
  }
  Type & set__ground_points(
    const std::vector<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>> & _arg)
  {
    this->ground_points = _arg;
    return *this;
  }
  Type & set__full_occ_score(
    const float & _arg)
  {
    this->full_occ_score = _arg;
    return *this;
  }
  Type & set__head_occ_score(
    const float & _arg)
  {
    this->head_occ_score = _arg;
    return *this;
  }
  Type & set__tail_occ_score(
    const float & _arg)
  {
    this->tail_occ_score = _arg;
    return *this;
  }
  Type & set__full_trunc_score(
    const float & _arg)
  {
    this->full_trunc_score = _arg;
    return *this;
  }
  Type & set__head_trunc_score(
    const float & _arg)
  {
    this->head_trunc_score = _arg;
    return *this;
  }
  Type & set__tail_trunc_score(
    const float & _arg)
  {
    this->tail_trunc_score = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__match_indices(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->match_indices = _arg;
    return *this;
  }
  Type & set__extra_infos(
    const std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>> & _arg)
  {
    this->extra_infos = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CAR =
    1u;
  static constexpr uint8_t TRUCK =
    2u;
  static constexpr uint8_t CONSTRUCTION_VEHICLE =
    3u;
  static constexpr uint8_t BUS =
    4u;
  static constexpr uint8_t MOTORCYCLE =
    5u;
  static constexpr uint8_t BICYCLE =
    6u;
  static constexpr uint8_t TRICYCLE =
    7u;
  static constexpr uint8_t CYCLIST =
    8u;
  static constexpr uint8_t PEDESTRIAN =
    9u;
  static constexpr uint8_t ANIMAL =
    10u;
  static constexpr uint8_t NO_DIRECTION =
    0u;
  static constexpr uint8_t TURN_LEFT =
    1u;
  static constexpr uint8_t TURN_RIGHT =
    2u;
  static constexpr uint8_t DIRECTION_UNKNOWN =
    3u;
  static constexpr uint8_t BRAKE_UNKNOWN =
    0u;
  static constexpr uint8_t BRAKE_OFF =
    1u;
  static constexpr uint8_t BRAKE_ON =
    2u;
  static constexpr uint8_t HAZARD_UNKNOWN =
    0u;
  static constexpr uint8_t HAZARD_OFF =
    1u;
  static constexpr uint8_t HAZARD_ON =
    2u;
  static constexpr uint8_t FOV120 =
    0u;
  static constexpr uint8_t FOV30 =
    1u;
  static constexpr uint8_t TRANS =
    2u;
  static constexpr uint8_t FUSION =
    3u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__DynamicObstacle
    std::shared_ptr<deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__DynamicObstacle
    std::shared_ptr<deva_perception_msgs::msg::DynamicObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicObstacle_ & other) const
  {
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->dynamic_obstacle_type != other.dynamic_obstacle_type) {
      return false;
    }
    if (this->det_score != other.det_score) {
      return false;
    }
    if (this->head_bbox != other.head_bbox) {
      return false;
    }
    if (this->tail_bbox != other.tail_bbox) {
      return false;
    }
    if (this->ped_bbox != other.ped_bbox) {
      return false;
    }
    if (this->subclassification_type != other.subclassification_type) {
      return false;
    }
    if (this->subclass_score != other.subclass_score) {
      return false;
    }
    if (this->light_valid != other.light_valid) {
      return false;
    }
    if (this->turn_type != other.turn_type) {
      return false;
    }
    if (this->turn_score != other.turn_score) {
      return false;
    }
    if (this->brake_type != other.brake_type) {
      return false;
    }
    if (this->brake_score != other.brake_score) {
      return false;
    }
    if (this->hazard_type != other.hazard_type) {
      return false;
    }
    if (this->hazard_score != other.hazard_score) {
      return false;
    }
    if (this->ground_points != other.ground_points) {
      return false;
    }
    if (this->full_occ_score != other.full_occ_score) {
      return false;
    }
    if (this->head_occ_score != other.head_occ_score) {
      return false;
    }
    if (this->tail_occ_score != other.tail_occ_score) {
      return false;
    }
    if (this->full_trunc_score != other.full_trunc_score) {
      return false;
    }
    if (this->head_trunc_score != other.head_trunc_score) {
      return false;
    }
    if (this->tail_trunc_score != other.tail_trunc_score) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->match_indices != other.match_indices) {
      return false;
    }
    if (this->extra_infos != other.extra_infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicObstacle_

// alias to use template instance with default allocator
using DynamicObstacle =
  deva_perception_msgs::msg::DynamicObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::CONSTRUCTION_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::TRICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::ANIMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::NO_DIRECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::TURN_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::DIRECTION_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::BRAKE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::BRAKE_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::BRAKE_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::HAZARD_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::HAZARD_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::HAZARD_ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::FOV120;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::FOV30;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::TRANS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DynamicObstacle_<ContainerAllocator>::FUSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__STRUCT_HPP_

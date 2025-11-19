// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RVDynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'world_info'
#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__struct.hpp"
// Member 'full_bbox'
// Member 'tail_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RVDynamicObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RVDynamicObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RVDynamicObstacle_
{
  using Type = RVDynamicObstacle_<ContainerAllocator>;

  explicit RVDynamicObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : world_info(_init),
    full_bbox(_init),
    tail_bbox(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->life_time = 0l;
      this->time_stamp = 0ll;
      this->conf = 0.0f;
      this->age = 0ul;
      this->select_level = 0;
      this->id = 0ul;
      this->mapped_type = 0;
      this->full_occ_score = 0.0f;
      this->full_trunc_score = 0.0f;
      this->obj_source = 0;
    }
  }

  explicit RVDynamicObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : world_info(_alloc, _init),
    full_bbox(_alloc, _init),
    tail_bbox(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->life_time = 0l;
      this->time_stamp = 0ll;
      this->conf = 0.0f;
      this->age = 0ul;
      this->select_level = 0;
      this->id = 0ul;
      this->mapped_type = 0;
      this->full_occ_score = 0.0f;
      this->full_trunc_score = 0.0f;
      this->obj_source = 0;
    }
  }

  // field types and members
  using _life_time_type =
    int32_t;
  _life_time_type life_time;
  using _time_stamp_type =
    int64_t;
  _time_stamp_type time_stamp;
  using _conf_type =
    float;
  _conf_type conf;
  using _age_type =
    uint32_t;
  _age_type age;
  using _select_level_type =
    int8_t;
  _select_level_type select_level;
  using _id_type =
    uint32_t;
  _id_type id;
  using _mapped_type_type =
    uint8_t;
  _mapped_type_type mapped_type;
  using _world_info_type =
    deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator>;
  _world_info_type world_info;
  using _full_bbox_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _full_bbox_type full_bbox;
  using _tail_bbox_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _tail_bbox_type tail_bbox;
  using _full_occ_score_type =
    float;
  _full_occ_score_type full_occ_score;
  using _full_trunc_score_type =
    float;
  _full_trunc_score_type full_trunc_score;
  using _obj_source_type =
    uint8_t;
  _obj_source_type obj_source;

  // setters for named parameter idiom
  Type & set__life_time(
    const int32_t & _arg)
  {
    this->life_time = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const int64_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__conf(
    const float & _arg)
  {
    this->conf = _arg;
    return *this;
  }
  Type & set__age(
    const uint32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__select_level(
    const int8_t & _arg)
  {
    this->select_level = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__mapped_type(
    const uint8_t & _arg)
  {
    this->mapped_type = _arg;
    return *this;
  }
  Type & set__world_info(
    const deva_perception_msgs::msg::DynamicObstWorldSpaceInfo_<ContainerAllocator> & _arg)
  {
    this->world_info = _arg;
    return *this;
  }
  Type & set__full_bbox(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->full_bbox = _arg;
    return *this;
  }
  Type & set__tail_bbox(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->tail_bbox = _arg;
    return *this;
  }
  Type & set__full_occ_score(
    const float & _arg)
  {
    this->full_occ_score = _arg;
    return *this;
  }
  Type & set__full_trunc_score(
    const float & _arg)
  {
    this->full_trunc_score = _arg;
    return *this;
  }
  Type & set__obj_source(
    const uint8_t & _arg)
  {
    this->obj_source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t NA_LEVEL =
    -1;
  static constexpr int8_t OTHER_LEVEL =
    0;
  static constexpr int8_t UNKNOW_LEVEL =
    4;
  static constexpr int8_t INIT_LEVEL =
    5;
  static constexpr int8_t THIRD_LEVEL =
    6;
  static constexpr int8_t SECOND_LEVEL =
    7;
  static constexpr int8_t CIPV_LEVEL =
    8;
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
  static constexpr uint8_t SUB_TYPE_CAR =
    100u;
  static constexpr uint8_t SUB_TYPE_SUV =
    101u;
  static constexpr uint8_t SUB_TYPE_VAN =
    102u;
  static constexpr uint8_t SUB_TYPE_PICKUP =
    103u;
  static constexpr uint8_t SUB_TYPE_POLICE_CAR =
    104u;
  static constexpr uint8_t SUB_TYPE_AMBULANCE =
    105u;
  static constexpr uint8_t SUB_TYPE_WRECKING_CAR =
    106u;
  static constexpr uint8_t SUB_TYPE_FORKLIFT =
    107u;
  static constexpr uint8_t SUB_TYPE_TRAILER =
    108u;
  static constexpr uint8_t SUB_TYPE_BOX_TRUCK =
    109u;
  static constexpr uint8_t SUB_TYPE_FLATBED_TRUCK =
    110u;
  static constexpr uint8_t SUB_TYPE_BUS =
    111u;
  static constexpr uint8_t SUB_TYPE_OTHER_TRUCK =
    112u;
  static constexpr uint8_t SUB_TYPE_TANK_TRUCK =
    113u;
  static constexpr uint8_t SUB_TYPE_FIRE_ENGINE =
    114u;
  static constexpr uint8_t SUB_TYPE_CLEAN_TRUCK =
    115u;
  static constexpr uint8_t SUB_TYPE_PEDESTRIAN =
    116u;
  static constexpr uint8_t SUB_TYPE_CHILD =
    117u;
  static constexpr uint8_t SUB_TYPE_BICYCLE_WITH_HUMAN =
    118u;
  static constexpr uint8_t SUB_TYPE_MOTORBIKE_WITH_HUMAN =
    119u;
  static constexpr uint8_t SUB_TYPE_ANIMAL_SMALL =
    120u;
  static constexpr uint8_t SUB_TYPE_OTHER_ANIMAL =
    121u;
  static constexpr uint8_t SUB_TYPE_BICYCLE =
    122u;
  static constexpr uint8_t SUB_TYPE_MOTORBIKE =
    123u;
  static constexpr uint8_t SUB_TYPE_TRICYCLE =
    124u;
  static constexpr uint8_t OBJ_3D =
    0u;
  static constexpr uint8_t OBJ_25D =
    1u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RVDynamicObstacle
    std::shared_ptr<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RVDynamicObstacle
    std::shared_ptr<deva_perception_msgs::msg::RVDynamicObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RVDynamicObstacle_ & other) const
  {
    if (this->life_time != other.life_time) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->conf != other.conf) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->select_level != other.select_level) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->mapped_type != other.mapped_type) {
      return false;
    }
    if (this->world_info != other.world_info) {
      return false;
    }
    if (this->full_bbox != other.full_bbox) {
      return false;
    }
    if (this->tail_bbox != other.tail_bbox) {
      return false;
    }
    if (this->full_occ_score != other.full_occ_score) {
      return false;
    }
    if (this->full_trunc_score != other.full_trunc_score) {
      return false;
    }
    if (this->obj_source != other.obj_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const RVDynamicObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RVDynamicObstacle_

// alias to use template instance with default allocator
using RVDynamicObstacle =
  deva_perception_msgs::msg::RVDynamicObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RVDynamicObstacle_<ContainerAllocator>::NA_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RVDynamicObstacle_<ContainerAllocator>::OTHER_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RVDynamicObstacle_<ContainerAllocator>::UNKNOW_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RVDynamicObstacle_<ContainerAllocator>::INIT_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RVDynamicObstacle_<ContainerAllocator>::THIRD_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RVDynamicObstacle_<ContainerAllocator>::SECOND_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RVDynamicObstacle_<ContainerAllocator>::CIPV_LEVEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::CONSTRUCTION_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::TRICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::ANIMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_SUV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_VAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_PICKUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_POLICE_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_AMBULANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_WRECKING_CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_FORKLIFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_TRAILER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_BOX_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_FLATBED_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_OTHER_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_TANK_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_FIRE_ENGINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_CLEAN_TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_CHILD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_BICYCLE_WITH_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_MOTORBIKE_WITH_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_ANIMAL_SMALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_OTHER_ANIMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_MOTORBIKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::SUB_TYPE_TRICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::OBJ_3D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynamicObstacle_<ContainerAllocator>::OBJ_25D;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__STRUCT_HPP_

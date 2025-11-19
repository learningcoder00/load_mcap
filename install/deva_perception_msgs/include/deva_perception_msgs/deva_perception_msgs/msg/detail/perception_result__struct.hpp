// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'st_boundaries'
#include "deva_perception_msgs/msg/detail/st_boundary__struct.hpp"
// Member 'ust_boundaries'
#include "deva_perception_msgs/msg/detail/ust_boundary__struct.hpp"
// Member 'crosswalks'
#include "deva_perception_msgs/msg/detail/crosswalk__struct.hpp"
// Member 'steering_arrows'
#include "deva_perception_msgs/msg/detail/steering_arrow__struct.hpp"
// Member 'noparking_zones'
#include "deva_perception_msgs/msg/detail/noparking_zone__struct.hpp"
// Member 'areas'
#include "deva_perception_msgs/msg/detail/area__struct.hpp"
// Member 'moving_obstacles'
#include "deva_perception_msgs/msg/detail/moving_obstacle__struct.hpp"
// Member 'general_static_obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.hpp"
// Member 'traffic_light_obstacles'
#include "deva_perception_msgs/msg/detail/traffic_light__struct.hpp"
// Member 'mutable_obstacles'
#include "deva_perception_msgs/msg/detail/mutable_obstacle__struct.hpp"
// Member 'center_lines'
#include "deva_perception_msgs/msg/detail/center_line__struct.hpp"
// Member 'fork_points'
#include "deva_perception_msgs/msg/detail/fork_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__PerceptionResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__PerceptionResult __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptionResult_
{
  using Type = PerceptionResult_<ContainerAllocator>;

  explicit PerceptionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    translation(_init),
    orientation(_init)
  {
    (void)_init;
  }

  explicit PerceptionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    translation(_alloc, _init),
    orientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _translation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _translation_type translation;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _st_boundaries_type =
    std::vector<deva_perception_msgs::msg::STBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::STBoundary_<ContainerAllocator>>>;
  _st_boundaries_type st_boundaries;
  using _ust_boundaries_type =
    std::vector<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>>;
  _ust_boundaries_type ust_boundaries;
  using _crosswalks_type =
    std::vector<deva_perception_msgs::msg::Crosswalk_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Crosswalk_<ContainerAllocator>>>;
  _crosswalks_type crosswalks;
  using _steering_arrows_type =
    std::vector<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>>;
  _steering_arrows_type steering_arrows;
  using _noparking_zones_type =
    std::vector<deva_perception_msgs::msg::NoparkingZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::NoparkingZone_<ContainerAllocator>>>;
  _noparking_zones_type noparking_zones;
  using _areas_type =
    std::vector<deva_perception_msgs::msg::Area_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Area_<ContainerAllocator>>>;
  _areas_type areas;
  using _moving_obstacles_type =
    std::vector<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>>>;
  _moving_obstacles_type moving_obstacles;
  using _general_static_obstacles_type =
    std::vector<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>>;
  _general_static_obstacles_type general_static_obstacles;
  using _traffic_light_obstacles_type =
    std::vector<deva_perception_msgs::msg::TrafficLight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::TrafficLight_<ContainerAllocator>>>;
  _traffic_light_obstacles_type traffic_light_obstacles;
  using _mutable_obstacles_type =
    std::vector<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>>>;
  _mutable_obstacles_type mutable_obstacles;
  using _center_lines_type =
    std::vector<deva_perception_msgs::msg::CenterLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::CenterLine_<ContainerAllocator>>>;
  _center_lines_type center_lines;
  using _fork_points_type =
    std::vector<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>>>;
  _fork_points_type fork_points;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__translation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->translation = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__st_boundaries(
    const std::vector<deva_perception_msgs::msg::STBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::STBoundary_<ContainerAllocator>>> & _arg)
  {
    this->st_boundaries = _arg;
    return *this;
  }
  Type & set__ust_boundaries(
    const std::vector<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>> & _arg)
  {
    this->ust_boundaries = _arg;
    return *this;
  }
  Type & set__crosswalks(
    const std::vector<deva_perception_msgs::msg::Crosswalk_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Crosswalk_<ContainerAllocator>>> & _arg)
  {
    this->crosswalks = _arg;
    return *this;
  }
  Type & set__steering_arrows(
    const std::vector<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>> & _arg)
  {
    this->steering_arrows = _arg;
    return *this;
  }
  Type & set__noparking_zones(
    const std::vector<deva_perception_msgs::msg::NoparkingZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::NoparkingZone_<ContainerAllocator>>> & _arg)
  {
    this->noparking_zones = _arg;
    return *this;
  }
  Type & set__areas(
    const std::vector<deva_perception_msgs::msg::Area_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Area_<ContainerAllocator>>> & _arg)
  {
    this->areas = _arg;
    return *this;
  }
  Type & set__moving_obstacles(
    const std::vector<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>>> & _arg)
  {
    this->moving_obstacles = _arg;
    return *this;
  }
  Type & set__general_static_obstacles(
    const std::vector<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>> & _arg)
  {
    this->general_static_obstacles = _arg;
    return *this;
  }
  Type & set__traffic_light_obstacles(
    const std::vector<deva_perception_msgs::msg::TrafficLight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::TrafficLight_<ContainerAllocator>>> & _arg)
  {
    this->traffic_light_obstacles = _arg;
    return *this;
  }
  Type & set__mutable_obstacles(
    const std::vector<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>>> & _arg)
  {
    this->mutable_obstacles = _arg;
    return *this;
  }
  Type & set__center_lines(
    const std::vector<deva_perception_msgs::msg::CenterLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::CenterLine_<ContainerAllocator>>> & _arg)
  {
    this->center_lines = _arg;
    return *this;
  }
  Type & set__fork_points(
    const std::vector<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>>> & _arg)
  {
    this->fork_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__PerceptionResult
    std::shared_ptr<deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__PerceptionResult
    std::shared_ptr<deva_perception_msgs::msg::PerceptionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptionResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->translation != other.translation) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->st_boundaries != other.st_boundaries) {
      return false;
    }
    if (this->ust_boundaries != other.ust_boundaries) {
      return false;
    }
    if (this->crosswalks != other.crosswalks) {
      return false;
    }
    if (this->steering_arrows != other.steering_arrows) {
      return false;
    }
    if (this->noparking_zones != other.noparking_zones) {
      return false;
    }
    if (this->areas != other.areas) {
      return false;
    }
    if (this->moving_obstacles != other.moving_obstacles) {
      return false;
    }
    if (this->general_static_obstacles != other.general_static_obstacles) {
      return false;
    }
    if (this->traffic_light_obstacles != other.traffic_light_obstacles) {
      return false;
    }
    if (this->mutable_obstacles != other.mutable_obstacles) {
      return false;
    }
    if (this->center_lines != other.center_lines) {
      return false;
    }
    if (this->fork_points != other.fork_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptionResult_

// alias to use template instance with default allocator
using PerceptionResult =
  deva_perception_msgs::msg::PerceptionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/ObstacleCommon.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
// Member 'dims'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'pose'
#include "deva_localization_msgs/msg/detail/pose__struct.hpp"
// Member 'bounding_box'
#include "deva_common_msgs/msg/detail/bounding_box__struct.hpp"
// Member 'associated_infos'
#include "deva_perception_msgs/msg/detail/associated_info__struct.hpp"
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.hpp"
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__ObstacleCommon __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__ObstacleCommon __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleCommon_
{
  using Type = ObstacleCommon_<ContainerAllocator>;

  explicit ObstacleCommon_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dims(_init),
    pose(_init),
    bounding_box(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_name = "";
      this->obs_id = 0l;
      this->score = 0.0f;
      this->track_length = 0l;
      this->tracking_time = 0.0;
      this->miss_length = 0l;
      this->is_stable_tracked = false;
      this->in_parking_slot = false;
    }
  }

  explicit ObstacleCommon_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obs_name(_alloc),
    dims(_alloc, _init),
    pose(_alloc, _init),
    bounding_box(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_name = "";
      this->obs_id = 0l;
      this->score = 0.0f;
      this->track_length = 0l;
      this->tracking_time = 0.0;
      this->miss_length = 0l;
      this->is_stable_tracked = false;
      this->in_parking_slot = false;
    }
  }

  // field types and members
  using _obs_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _obs_name_type obs_name;
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;
  using _obs_id_type =
    int32_t;
  _obs_id_type obs_id;
  using _dims_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _dims_type dims;
  using _pose_type =
    deva_localization_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _score_type =
    float;
  _score_type score;
  using _track_length_type =
    int32_t;
  _track_length_type track_length;
  using _tracking_time_type =
    double;
  _tracking_time_type tracking_time;
  using _bounding_box_type =
    deva_common_msgs::msg::BoundingBox_<ContainerAllocator>;
  _bounding_box_type bounding_box;
  using _miss_length_type =
    int32_t;
  _miss_length_type miss_length;
  using _is_stable_tracked_type =
    bool;
  _is_stable_tracked_type is_stable_tracked;
  using _in_parking_slot_type =
    bool;
  _in_parking_slot_type in_parking_slot;
  using _associated_infos_type =
    std::vector<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>>>;
  _associated_infos_type associated_infos;
  using _extra_infos_type =
    std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>>;
  _extra_infos_type extra_infos;
  using _pixel_points_type =
    std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>>;
  _pixel_points_type pixel_points;

  // setters for named parameter idiom
  Type & set__obs_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->obs_name = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__obs_id(
    const int32_t & _arg)
  {
    this->obs_id = _arg;
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
  Type & set__score(
    const float & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__track_length(
    const int32_t & _arg)
  {
    this->track_length = _arg;
    return *this;
  }
  Type & set__tracking_time(
    const double & _arg)
  {
    this->tracking_time = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const deva_common_msgs::msg::BoundingBox_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__miss_length(
    const int32_t & _arg)
  {
    this->miss_length = _arg;
    return *this;
  }
  Type & set__is_stable_tracked(
    const bool & _arg)
  {
    this->is_stable_tracked = _arg;
    return *this;
  }
  Type & set__in_parking_slot(
    const bool & _arg)
  {
    this->in_parking_slot = _arg;
    return *this;
  }
  Type & set__associated_infos(
    const std::vector<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>>> & _arg)
  {
    this->associated_infos = _arg;
    return *this;
  }
  Type & set__extra_infos(
    const std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>> & _arg)
  {
    this->extra_infos = _arg;
    return *this;
  }
  Type & set__pixel_points(
    const std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>> & _arg)
  {
    this->pixel_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__ObstacleCommon
    std::shared_ptr<deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__ObstacleCommon
    std::shared_ptr<deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleCommon_ & other) const
  {
    if (this->obs_name != other.obs_name) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->obs_id != other.obs_id) {
      return false;
    }
    if (this->dims != other.dims) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->track_length != other.track_length) {
      return false;
    }
    if (this->tracking_time != other.tracking_time) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->miss_length != other.miss_length) {
      return false;
    }
    if (this->is_stable_tracked != other.is_stable_tracked) {
      return false;
    }
    if (this->in_parking_slot != other.in_parking_slot) {
      return false;
    }
    if (this->associated_infos != other.associated_infos) {
      return false;
    }
    if (this->extra_infos != other.extra_infos) {
      return false;
    }
    if (this->pixel_points != other.pixel_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleCommon_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleCommon_

// alias to use template instance with default allocator
using ObstacleCommon =
  deva_perception_msgs::msg::ObstacleCommon_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__OBSTACLE_COMMON__STRUCT_HPP_

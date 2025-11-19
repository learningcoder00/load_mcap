// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/LaneArrayv2.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'lane_array'
#include "deva_perception_msgs/msg/detail/lanev2__struct.hpp"
// Member 'crosswalk_array'
#include "deva_perception_msgs/msg/detail/crosswalk__struct.hpp"
// Member 'steering_arrow_array'
#include "deva_perception_msgs/msg/detail/steering_arrow__struct.hpp"
// Member 'noparking_zone_array'
#include "deva_perception_msgs/msg/detail/noparking_zone__struct.hpp"
// Member 'partition_zone_array'
#include "deva_perception_msgs/msg/detail/partition_zone__struct.hpp"
// Member 'center_line_array'
#include "deva_perception_msgs/msg/detail/percept_center_line__struct.hpp"
// Member 'entrance_array'
#include "deva_perception_msgs/msg/detail/entrance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__LaneArrayv2 __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__LaneArrayv2 __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneArrayv2_
{
  using Type = LaneArrayv2_<ContainerAllocator>;

  explicit LaneArrayv2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_left_lane_id = 0l;
      this->vehicle_right_lane_id = 0l;
    }
  }

  explicit LaneArrayv2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_left_lane_id = 0l;
      this->vehicle_right_lane_id = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicle_left_lane_id_type =
    int32_t;
  _vehicle_left_lane_id_type vehicle_left_lane_id;
  using _vehicle_right_lane_id_type =
    int32_t;
  _vehicle_right_lane_id_type vehicle_right_lane_id;
  using _lane_array_type =
    std::vector<deva_perception_msgs::msg::Lanev2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Lanev2_<ContainerAllocator>>>;
  _lane_array_type lane_array;
  using _crosswalk_array_type =
    std::vector<deva_perception_msgs::msg::Crosswalk_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Crosswalk_<ContainerAllocator>>>;
  _crosswalk_array_type crosswalk_array;
  using _steering_arrow_array_type =
    std::vector<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>>;
  _steering_arrow_array_type steering_arrow_array;
  using _noparking_zone_array_type =
    std::vector<deva_perception_msgs::msg::NoparkingZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::NoparkingZone_<ContainerAllocator>>>;
  _noparking_zone_array_type noparking_zone_array;
  using _partition_zone_array_type =
    std::vector<deva_perception_msgs::msg::PartitionZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::PartitionZone_<ContainerAllocator>>>;
  _partition_zone_array_type partition_zone_array;
  using _center_line_array_type =
    std::vector<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>>>;
  _center_line_array_type center_line_array;
  using _entrance_array_type =
    std::vector<deva_perception_msgs::msg::Entrance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Entrance_<ContainerAllocator>>>;
  _entrance_array_type entrance_array;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicle_left_lane_id(
    const int32_t & _arg)
  {
    this->vehicle_left_lane_id = _arg;
    return *this;
  }
  Type & set__vehicle_right_lane_id(
    const int32_t & _arg)
  {
    this->vehicle_right_lane_id = _arg;
    return *this;
  }
  Type & set__lane_array(
    const std::vector<deva_perception_msgs::msg::Lanev2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Lanev2_<ContainerAllocator>>> & _arg)
  {
    this->lane_array = _arg;
    return *this;
  }
  Type & set__crosswalk_array(
    const std::vector<deva_perception_msgs::msg::Crosswalk_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Crosswalk_<ContainerAllocator>>> & _arg)
  {
    this->crosswalk_array = _arg;
    return *this;
  }
  Type & set__steering_arrow_array(
    const std::vector<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::SteeringArrow_<ContainerAllocator>>> & _arg)
  {
    this->steering_arrow_array = _arg;
    return *this;
  }
  Type & set__noparking_zone_array(
    const std::vector<deva_perception_msgs::msg::NoparkingZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::NoparkingZone_<ContainerAllocator>>> & _arg)
  {
    this->noparking_zone_array = _arg;
    return *this;
  }
  Type & set__partition_zone_array(
    const std::vector<deva_perception_msgs::msg::PartitionZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::PartitionZone_<ContainerAllocator>>> & _arg)
  {
    this->partition_zone_array = _arg;
    return *this;
  }
  Type & set__center_line_array(
    const std::vector<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>>> & _arg)
  {
    this->center_line_array = _arg;
    return *this;
  }
  Type & set__entrance_array(
    const std::vector<deva_perception_msgs::msg::Entrance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::Entrance_<ContainerAllocator>>> & _arg)
  {
    this->entrance_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__LaneArrayv2
    std::shared_ptr<deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__LaneArrayv2
    std::shared_ptr<deva_perception_msgs::msg::LaneArrayv2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneArrayv2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicle_left_lane_id != other.vehicle_left_lane_id) {
      return false;
    }
    if (this->vehicle_right_lane_id != other.vehicle_right_lane_id) {
      return false;
    }
    if (this->lane_array != other.lane_array) {
      return false;
    }
    if (this->crosswalk_array != other.crosswalk_array) {
      return false;
    }
    if (this->steering_arrow_array != other.steering_arrow_array) {
      return false;
    }
    if (this->noparking_zone_array != other.noparking_zone_array) {
      return false;
    }
    if (this->partition_zone_array != other.partition_zone_array) {
      return false;
    }
    if (this->center_line_array != other.center_line_array) {
      return false;
    }
    if (this->entrance_array != other.entrance_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneArrayv2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneArrayv2_

// alias to use template instance with default allocator
using LaneArrayv2 =
  deva_perception_msgs::msg::LaneArrayv2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__STRUCT_HPP_

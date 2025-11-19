// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/AdbTrafficSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__AdbTrafficSign __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__AdbTrafficSign __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdbTrafficSign_
{
  using Type = AdbTrafficSign_<ContainerAllocator>;

  explicit AdbTrafficSign_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->conf = 0;
      this->parsing_conf = 0;
      this->track_info = 0;
      this->age = 0ul;
      this->life_time = 0ul;
      this->distance = 0.0f;
      this->horizon_left_angle = 0.0f;
      this->horizon_right_angle = 0.0f;
      this->vertical_bottom_angle = 0.0f;
      this->vertical_top_angle = 0.0f;
    }
  }

  explicit AdbTrafficSign_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->conf = 0;
      this->parsing_conf = 0;
      this->track_info = 0;
      this->age = 0ul;
      this->life_time = 0ul;
      this->distance = 0.0f;
      this->horizon_left_angle = 0.0f;
      this->horizon_right_angle = 0.0f;
      this->vertical_bottom_angle = 0.0f;
      this->vertical_top_angle = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _conf_type =
    uint8_t;
  _conf_type conf;
  using _parsing_conf_type =
    uint8_t;
  _parsing_conf_type parsing_conf;
  using _track_info_type =
    uint8_t;
  _track_info_type track_info;
  using _age_type =
    uint32_t;
  _age_type age;
  using _life_time_type =
    uint32_t;
  _life_time_type life_time;
  using _distance_type =
    float;
  _distance_type distance;
  using _horizon_left_angle_type =
    float;
  _horizon_left_angle_type horizon_left_angle;
  using _horizon_right_angle_type =
    float;
  _horizon_right_angle_type horizon_right_angle;
  using _vertical_bottom_angle_type =
    float;
  _vertical_bottom_angle_type vertical_bottom_angle;
  using _vertical_top_angle_type =
    float;
  _vertical_top_angle_type vertical_top_angle;
  using _extra_infos_type =
    std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>>;
  _extra_infos_type extra_infos;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__conf(
    const uint8_t & _arg)
  {
    this->conf = _arg;
    return *this;
  }
  Type & set__parsing_conf(
    const uint8_t & _arg)
  {
    this->parsing_conf = _arg;
    return *this;
  }
  Type & set__track_info(
    const uint8_t & _arg)
  {
    this->track_info = _arg;
    return *this;
  }
  Type & set__age(
    const uint32_t & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__life_time(
    const uint32_t & _arg)
  {
    this->life_time = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__horizon_left_angle(
    const float & _arg)
  {
    this->horizon_left_angle = _arg;
    return *this;
  }
  Type & set__horizon_right_angle(
    const float & _arg)
  {
    this->horizon_right_angle = _arg;
    return *this;
  }
  Type & set__vertical_bottom_angle(
    const float & _arg)
  {
    this->vertical_bottom_angle = _arg;
    return *this;
  }
  Type & set__vertical_top_angle(
    const float & _arg)
  {
    this->vertical_top_angle = _arg;
    return *this;
  }
  Type & set__extra_infos(
    const std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>> & _arg)
  {
    this->extra_infos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__AdbTrafficSign
    std::shared_ptr<deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__AdbTrafficSign
    std::shared_ptr<deva_perception_msgs::msg::AdbTrafficSign_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdbTrafficSign_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->conf != other.conf) {
      return false;
    }
    if (this->parsing_conf != other.parsing_conf) {
      return false;
    }
    if (this->track_info != other.track_info) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->life_time != other.life_time) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->horizon_left_angle != other.horizon_left_angle) {
      return false;
    }
    if (this->horizon_right_angle != other.horizon_right_angle) {
      return false;
    }
    if (this->vertical_bottom_angle != other.vertical_bottom_angle) {
      return false;
    }
    if (this->vertical_top_angle != other.vertical_top_angle) {
      return false;
    }
    if (this->extra_infos != other.extra_infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdbTrafficSign_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdbTrafficSign_

// alias to use template instance with default allocator
using AdbTrafficSign =
  deva_perception_msgs::msg::AdbTrafficSign_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ADB_TRAFFIC_SIGN__STRUCT_HPP_

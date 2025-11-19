// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__STRUCT_HPP_

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
// Member 'f120trafficobjects'
// Member 'f30trafficobjects'
#include "deva_perception_msgs/msg/detail/traffic_object__struct.hpp"
// Member 'e2eobjects'
#include "deva_perception_msgs/msg/detail/e2e_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__TrafficDetectData __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__TrafficDetectData __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficDetectData_
{
  using Type = TrafficDetectData_<ContainerAllocator>;

  explicit TrafficDetectData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    e2eobjects(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->framenum = 0ull;
      this->timestamp = 0ull;
      this->abs_vel_x = 0.0f;
      this->abs_acc_x = 0.0f;
      this->vel_motion = 0;
      this->acc_motion = 0;
      this->f120_object_num = 0;
      this->f30_object_num = 0;
      this->f120trafficobjects.fill(deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>{_init});
      this->f30trafficobjects.fill(deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>{_init});
      this->time_of_day = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  explicit TrafficDetectData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    f120trafficobjects(_alloc),
    f30trafficobjects(_alloc),
    e2eobjects(_alloc, _init),
    reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->framenum = 0ull;
      this->timestamp = 0ull;
      this->abs_vel_x = 0.0f;
      this->abs_acc_x = 0.0f;
      this->vel_motion = 0;
      this->acc_motion = 0;
      this->f120_object_num = 0;
      this->f30_object_num = 0;
      this->f120trafficobjects.fill(deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>{_alloc, _init});
      this->f30trafficobjects.fill(deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>{_alloc, _init});
      this->time_of_day = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _framenum_type =
    uint64_t;
  _framenum_type framenum;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _abs_vel_x_type =
    float;
  _abs_vel_x_type abs_vel_x;
  using _abs_acc_x_type =
    float;
  _abs_acc_x_type abs_acc_x;
  using _vel_motion_type =
    uint8_t;
  _vel_motion_type vel_motion;
  using _acc_motion_type =
    uint8_t;
  _acc_motion_type acc_motion;
  using _f120_object_num_type =
    uint8_t;
  _f120_object_num_type f120_object_num;
  using _f30_object_num_type =
    uint8_t;
  _f30_object_num_type f30_object_num;
  using _f120trafficobjects_type =
    std::array<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>, 64>;
  _f120trafficobjects_type f120trafficobjects;
  using _f30trafficobjects_type =
    std::array<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>, 64>;
  _f30trafficobjects_type f30trafficobjects;
  using _e2eobjects_type =
    deva_perception_msgs::msg::E2eResult_<ContainerAllocator>;
  _e2eobjects_type e2eobjects;
  using _time_of_day_type =
    uint8_t;
  _time_of_day_type time_of_day;
  using _reserved_type =
    std::array<uint8_t, 2>;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__framenum(
    const uint64_t & _arg)
  {
    this->framenum = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__abs_vel_x(
    const float & _arg)
  {
    this->abs_vel_x = _arg;
    return *this;
  }
  Type & set__abs_acc_x(
    const float & _arg)
  {
    this->abs_acc_x = _arg;
    return *this;
  }
  Type & set__vel_motion(
    const uint8_t & _arg)
  {
    this->vel_motion = _arg;
    return *this;
  }
  Type & set__acc_motion(
    const uint8_t & _arg)
  {
    this->acc_motion = _arg;
    return *this;
  }
  Type & set__f120_object_num(
    const uint8_t & _arg)
  {
    this->f120_object_num = _arg;
    return *this;
  }
  Type & set__f30_object_num(
    const uint8_t & _arg)
  {
    this->f30_object_num = _arg;
    return *this;
  }
  Type & set__f120trafficobjects(
    const std::array<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>, 64> & _arg)
  {
    this->f120trafficobjects = _arg;
    return *this;
  }
  Type & set__f30trafficobjects(
    const std::array<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>, 64> & _arg)
  {
    this->f30trafficobjects = _arg;
    return *this;
  }
  Type & set__e2eobjects(
    const deva_perception_msgs::msg::E2eResult_<ContainerAllocator> & _arg)
  {
    this->e2eobjects = _arg;
    return *this;
  }
  Type & set__time_of_day(
    const uint8_t & _arg)
  {
    this->time_of_day = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint8_t, 2> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficDetectData
    std::shared_ptr<deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficDetectData
    std::shared_ptr<deva_perception_msgs::msg::TrafficDetectData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficDetectData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->abs_vel_x != other.abs_vel_x) {
      return false;
    }
    if (this->abs_acc_x != other.abs_acc_x) {
      return false;
    }
    if (this->vel_motion != other.vel_motion) {
      return false;
    }
    if (this->acc_motion != other.acc_motion) {
      return false;
    }
    if (this->f120_object_num != other.f120_object_num) {
      return false;
    }
    if (this->f30_object_num != other.f30_object_num) {
      return false;
    }
    if (this->f120trafficobjects != other.f120trafficobjects) {
      return false;
    }
    if (this->f30trafficobjects != other.f30trafficobjects) {
      return false;
    }
    if (this->e2eobjects != other.e2eobjects) {
      return false;
    }
    if (this->time_of_day != other.time_of_day) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficDetectData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficDetectData_

// alias to use template instance with default allocator
using TrafficDetectData =
  deva_perception_msgs::msg::TrafficDetectData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_DETECT_DATA__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/UltrasonicRadar.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__UltrasonicRadar __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__UltrasonicRadar __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UltrasonicRadar_
{
  using Type = UltrasonicRadar_<ContainerAllocator>;

  explicit UltrasonicRadar_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radar_identify_id = 0;
      this->radar_name = "";
      this->radar_type = "";
      this->radar_state = false;
      this->radar_tx_status = false;
      this->radar_rx_status = false;
      this->range = 0.0f;
      this->max_radar_distance = 0;
      this->radar_distance = 0.0;
      this->radar_distance_vaild = false;
    }
  }

  explicit UltrasonicRadar_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : radar_name(_alloc),
    radar_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radar_identify_id = 0;
      this->radar_name = "";
      this->radar_type = "";
      this->radar_state = false;
      this->radar_tx_status = false;
      this->radar_rx_status = false;
      this->range = 0.0f;
      this->max_radar_distance = 0;
      this->radar_distance = 0.0;
      this->radar_distance_vaild = false;
    }
  }

  // field types and members
  using _radar_identify_id_type =
    uint8_t;
  _radar_identify_id_type radar_identify_id;
  using _radar_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _radar_name_type radar_name;
  using _radar_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _radar_type_type radar_type;
  using _radar_state_type =
    bool;
  _radar_state_type radar_state;
  using _radar_tx_status_type =
    bool;
  _radar_tx_status_type radar_tx_status;
  using _radar_rx_status_type =
    bool;
  _radar_rx_status_type radar_rx_status;
  using _range_type =
    float;
  _range_type range;
  using _max_radar_distance_type =
    uint16_t;
  _max_radar_distance_type max_radar_distance;
  using _radar_distance_type =
    double;
  _radar_distance_type radar_distance;
  using _radar_distance_vaild_type =
    bool;
  _radar_distance_vaild_type radar_distance_vaild;

  // setters for named parameter idiom
  Type & set__radar_identify_id(
    const uint8_t & _arg)
  {
    this->radar_identify_id = _arg;
    return *this;
  }
  Type & set__radar_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->radar_name = _arg;
    return *this;
  }
  Type & set__radar_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->radar_type = _arg;
    return *this;
  }
  Type & set__radar_state(
    const bool & _arg)
  {
    this->radar_state = _arg;
    return *this;
  }
  Type & set__radar_tx_status(
    const bool & _arg)
  {
    this->radar_tx_status = _arg;
    return *this;
  }
  Type & set__radar_rx_status(
    const bool & _arg)
  {
    this->radar_rx_status = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__max_radar_distance(
    const uint16_t & _arg)
  {
    this->max_radar_distance = _arg;
    return *this;
  }
  Type & set__radar_distance(
    const double & _arg)
  {
    this->radar_distance = _arg;
    return *this;
  }
  Type & set__radar_distance_vaild(
    const bool & _arg)
  {
    this->radar_distance_vaild = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MAX_RADAR_DISTANCE =
    510u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__UltrasonicRadar
    std::shared_ptr<deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__UltrasonicRadar
    std::shared_ptr<deva_perception_msgs::msg::UltrasonicRadar_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UltrasonicRadar_ & other) const
  {
    if (this->radar_identify_id != other.radar_identify_id) {
      return false;
    }
    if (this->radar_name != other.radar_name) {
      return false;
    }
    if (this->radar_type != other.radar_type) {
      return false;
    }
    if (this->radar_state != other.radar_state) {
      return false;
    }
    if (this->radar_tx_status != other.radar_tx_status) {
      return false;
    }
    if (this->radar_rx_status != other.radar_rx_status) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->max_radar_distance != other.max_radar_distance) {
      return false;
    }
    if (this->radar_distance != other.radar_distance) {
      return false;
    }
    if (this->radar_distance_vaild != other.radar_distance_vaild) {
      return false;
    }
    return true;
  }
  bool operator!=(const UltrasonicRadar_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UltrasonicRadar_

// alias to use template instance with default allocator
using UltrasonicRadar =
  deva_perception_msgs::msg::UltrasonicRadar_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t UltrasonicRadar_<ContainerAllocator>::MAX_RADAR_DISTANCE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR__STRUCT_HPP_

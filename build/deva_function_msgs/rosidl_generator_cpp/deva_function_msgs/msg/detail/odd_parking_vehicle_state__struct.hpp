// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/OddParkingVehicleState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__OddParkingVehicleState __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__OddParkingVehicleState __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OddParkingVehicleState_
{
  using Type = OddParkingVehicleState_<ContainerAllocator>;

  explicit OddParkingVehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->odd_apa_illumination_pass_flag = 0;
      this->odd_apa_gradient_pass_flag = 0;
      this->odd_apa_standby_hu_speed_pass_flag = 0;
    }
  }

  explicit OddParkingVehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->odd_apa_illumination_pass_flag = 0;
      this->odd_apa_gradient_pass_flag = 0;
      this->odd_apa_standby_hu_speed_pass_flag = 0;
    }
  }

  // field types and members
  using _publish_timestamp_type =
    double;
  _publish_timestamp_type publish_timestamp;
  using _odd_apa_illumination_pass_flag_type =
    uint8_t;
  _odd_apa_illumination_pass_flag_type odd_apa_illumination_pass_flag;
  using _odd_apa_gradient_pass_flag_type =
    uint8_t;
  _odd_apa_gradient_pass_flag_type odd_apa_gradient_pass_flag;
  using _odd_apa_standby_hu_speed_pass_flag_type =
    uint8_t;
  _odd_apa_standby_hu_speed_pass_flag_type odd_apa_standby_hu_speed_pass_flag;

  // setters for named parameter idiom
  Type & set__publish_timestamp(
    const double & _arg)
  {
    this->publish_timestamp = _arg;
    return *this;
  }
  Type & set__odd_apa_illumination_pass_flag(
    const uint8_t & _arg)
  {
    this->odd_apa_illumination_pass_flag = _arg;
    return *this;
  }
  Type & set__odd_apa_gradient_pass_flag(
    const uint8_t & _arg)
  {
    this->odd_apa_gradient_pass_flag = _arg;
    return *this;
  }
  Type & set__odd_apa_standby_hu_speed_pass_flag(
    const uint8_t & _arg)
  {
    this->odd_apa_standby_hu_speed_pass_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__OddParkingVehicleState
    std::shared_ptr<deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__OddParkingVehicleState
    std::shared_ptr<deva_function_msgs::msg::OddParkingVehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OddParkingVehicleState_ & other) const
  {
    if (this->publish_timestamp != other.publish_timestamp) {
      return false;
    }
    if (this->odd_apa_illumination_pass_flag != other.odd_apa_illumination_pass_flag) {
      return false;
    }
    if (this->odd_apa_gradient_pass_flag != other.odd_apa_gradient_pass_flag) {
      return false;
    }
    if (this->odd_apa_standby_hu_speed_pass_flag != other.odd_apa_standby_hu_speed_pass_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const OddParkingVehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OddParkingVehicleState_

// alias to use template instance with default allocator
using OddParkingVehicleState =
  deva_function_msgs::msg::OddParkingVehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ODD_PARKING_VEHICLE_STATE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__STRUCT_HPP_

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
// Member 'e2e_adb_veh_obj'
#include "deva_perception_msgs/msg/detail/e2e_adb__struct.hpp"
// Member 'e2e_adb_traffic_sign'
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__E2eAdbArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__E2eAdbArray __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct E2eAdbArray_
{
  using Type = E2eAdbArray_<ContainerAllocator>;

  explicit E2eAdbArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pre_crash_front_data_closing_velocity = 0.0;
      this->pre_crash_front_data_object_class = 0;
      this->pre_crash_front_data_overlap = 0.0;
      this->pre_crash_front_data_time_to_impact = 0.0f;
      this->lit_area = false;
      this->camera_sts_for_ahbc = 0;
      this->too_many_cars = false;
    }
  }

  explicit E2eAdbArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pre_crash_front_data_closing_velocity = 0.0;
      this->pre_crash_front_data_object_class = 0;
      this->pre_crash_front_data_overlap = 0.0;
      this->pre_crash_front_data_time_to_impact = 0.0f;
      this->lit_area = false;
      this->camera_sts_for_ahbc = 0;
      this->too_many_cars = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pre_crash_front_data_closing_velocity_type =
    double;
  _pre_crash_front_data_closing_velocity_type pre_crash_front_data_closing_velocity;
  using _pre_crash_front_data_object_class_type =
    uint8_t;
  _pre_crash_front_data_object_class_type pre_crash_front_data_object_class;
  using _pre_crash_front_data_overlap_type =
    double;
  _pre_crash_front_data_overlap_type pre_crash_front_data_overlap;
  using _pre_crash_front_data_time_to_impact_type =
    float;
  _pre_crash_front_data_time_to_impact_type pre_crash_front_data_time_to_impact;
  using _lit_area_type =
    bool;
  _lit_area_type lit_area;
  using _camera_sts_for_ahbc_type =
    uint8_t;
  _camera_sts_for_ahbc_type camera_sts_for_ahbc;
  using _too_many_cars_type =
    bool;
  _too_many_cars_type too_many_cars;
  using _e2e_adb_veh_obj_type =
    std::vector<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>>>;
  _e2e_adb_veh_obj_type e2e_adb_veh_obj;
  using _e2e_adb_traffic_sign_type =
    std::vector<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>>>;
  _e2e_adb_traffic_sign_type e2e_adb_traffic_sign;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pre_crash_front_data_closing_velocity(
    const double & _arg)
  {
    this->pre_crash_front_data_closing_velocity = _arg;
    return *this;
  }
  Type & set__pre_crash_front_data_object_class(
    const uint8_t & _arg)
  {
    this->pre_crash_front_data_object_class = _arg;
    return *this;
  }
  Type & set__pre_crash_front_data_overlap(
    const double & _arg)
  {
    this->pre_crash_front_data_overlap = _arg;
    return *this;
  }
  Type & set__pre_crash_front_data_time_to_impact(
    const float & _arg)
  {
    this->pre_crash_front_data_time_to_impact = _arg;
    return *this;
  }
  Type & set__lit_area(
    const bool & _arg)
  {
    this->lit_area = _arg;
    return *this;
  }
  Type & set__camera_sts_for_ahbc(
    const uint8_t & _arg)
  {
    this->camera_sts_for_ahbc = _arg;
    return *this;
  }
  Type & set__too_many_cars(
    const bool & _arg)
  {
    this->too_many_cars = _arg;
    return *this;
  }
  Type & set__e2e_adb_veh_obj(
    const std::vector<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>>> & _arg)
  {
    this->e2e_adb_veh_obj = _arg;
    return *this;
  }
  Type & set__e2e_adb_traffic_sign(
    const std::vector<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>>> & _arg)
  {
    this->e2e_adb_traffic_sign = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__E2eAdbArray
    std::shared_ptr<deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__E2eAdbArray
    std::shared_ptr<deva_perception_msgs::msg::E2eAdbArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const E2eAdbArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pre_crash_front_data_closing_velocity != other.pre_crash_front_data_closing_velocity) {
      return false;
    }
    if (this->pre_crash_front_data_object_class != other.pre_crash_front_data_object_class) {
      return false;
    }
    if (this->pre_crash_front_data_overlap != other.pre_crash_front_data_overlap) {
      return false;
    }
    if (this->pre_crash_front_data_time_to_impact != other.pre_crash_front_data_time_to_impact) {
      return false;
    }
    if (this->lit_area != other.lit_area) {
      return false;
    }
    if (this->camera_sts_for_ahbc != other.camera_sts_for_ahbc) {
      return false;
    }
    if (this->too_many_cars != other.too_many_cars) {
      return false;
    }
    if (this->e2e_adb_veh_obj != other.e2e_adb_veh_obj) {
      return false;
    }
    if (this->e2e_adb_traffic_sign != other.e2e_adb_traffic_sign) {
      return false;
    }
    return true;
  }
  bool operator!=(const E2eAdbArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct E2eAdbArray_

// alias to use template instance with default allocator
using E2eAdbArray =
  deva_perception_msgs::msg::E2eAdbArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__STRUCT_HPP_

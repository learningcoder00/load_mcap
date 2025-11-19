// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_localization_msgs:msg/GnssBestPose.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__STRUCT_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__STRUCT_HPP_

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
// Member 'linear_velocity'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_localization_msgs__msg__GnssBestPose __attribute__((deprecated))
#else
# define DEPRECATED__deva_localization_msgs__msg__GnssBestPose __declspec(deprecated)
#endif

namespace deva_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GnssBestPose_
{
  using Type = GnssBestPose_<ContainerAllocator>;

  explicit GnssBestPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    linear_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = "";
      this->position_type = "";
      this->lat = 0.0;
      this->lon = 0.0;
      this->height_msl = 0.0;
      this->undulation = 0.0f;
      this->datum_id = "";
      this->lat_sigma = 0.0f;
      this->lon_sigma = 0.0f;
      this->height_sigma = 0.0f;
      this->diff_age = 0.0f;
      this->solution_age = 0.0f;
      this->num_satellites_tracked = 0;
      this->num_satellites_used_in_solution = 0;
      this->num_gps_and_glonass_l1_used_in_solution = 0;
      this->num_gps_and_glonass_l1_and_l2_used_in_solution = 0;
      this->extended_solution_status = 0ul;
      this->gps_glonass_used_mask = 0ul;
      this->galileo_beidou_used_mask = 0ul;
      this->velocity_latency = 0.0f;
    }
  }

  explicit GnssBestPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    solution_status(_alloc),
    position_type(_alloc),
    datum_id(_alloc),
    linear_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = "";
      this->position_type = "";
      this->lat = 0.0;
      this->lon = 0.0;
      this->height_msl = 0.0;
      this->undulation = 0.0f;
      this->datum_id = "";
      this->lat_sigma = 0.0f;
      this->lon_sigma = 0.0f;
      this->height_sigma = 0.0f;
      this->diff_age = 0.0f;
      this->solution_age = 0.0f;
      this->num_satellites_tracked = 0;
      this->num_satellites_used_in_solution = 0;
      this->num_gps_and_glonass_l1_used_in_solution = 0;
      this->num_gps_and_glonass_l1_and_l2_used_in_solution = 0;
      this->extended_solution_status = 0ul;
      this->gps_glonass_used_mask = 0ul;
      this->galileo_beidou_used_mask = 0ul;
      this->velocity_latency = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _solution_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _solution_status_type solution_status;
  using _position_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _position_type_type position_type;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _height_msl_type =
    double;
  _height_msl_type height_msl;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _datum_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _datum_id_type datum_id;
  using _lat_sigma_type =
    float;
  _lat_sigma_type lat_sigma;
  using _lon_sigma_type =
    float;
  _lon_sigma_type lon_sigma;
  using _height_sigma_type =
    float;
  _height_sigma_type height_sigma;
  using _diff_age_type =
    float;
  _diff_age_type diff_age;
  using _solution_age_type =
    float;
  _solution_age_type solution_age;
  using _num_satellites_tracked_type =
    uint8_t;
  _num_satellites_tracked_type num_satellites_tracked;
  using _num_satellites_used_in_solution_type =
    uint8_t;
  _num_satellites_used_in_solution_type num_satellites_used_in_solution;
  using _num_gps_and_glonass_l1_used_in_solution_type =
    uint8_t;
  _num_gps_and_glonass_l1_used_in_solution_type num_gps_and_glonass_l1_used_in_solution;
  using _num_gps_and_glonass_l1_and_l2_used_in_solution_type =
    uint8_t;
  _num_gps_and_glonass_l1_and_l2_used_in_solution_type num_gps_and_glonass_l1_and_l2_used_in_solution;
  using _extended_solution_status_type =
    uint32_t;
  _extended_solution_status_type extended_solution_status;
  using _gps_glonass_used_mask_type =
    uint32_t;
  _gps_glonass_used_mask_type gps_glonass_used_mask;
  using _galileo_beidou_used_mask_type =
    uint32_t;
  _galileo_beidou_used_mask_type galileo_beidou_used_mask;
  using _linear_velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _velocity_latency_type =
    float;
  _velocity_latency_type velocity_latency;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__solution_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->solution_status = _arg;
    return *this;
  }
  Type & set__position_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->position_type = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__height_msl(
    const double & _arg)
  {
    this->height_msl = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__datum_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->datum_id = _arg;
    return *this;
  }
  Type & set__lat_sigma(
    const float & _arg)
  {
    this->lat_sigma = _arg;
    return *this;
  }
  Type & set__lon_sigma(
    const float & _arg)
  {
    this->lon_sigma = _arg;
    return *this;
  }
  Type & set__height_sigma(
    const float & _arg)
  {
    this->height_sigma = _arg;
    return *this;
  }
  Type & set__diff_age(
    const float & _arg)
  {
    this->diff_age = _arg;
    return *this;
  }
  Type & set__solution_age(
    const float & _arg)
  {
    this->solution_age = _arg;
    return *this;
  }
  Type & set__num_satellites_tracked(
    const uint8_t & _arg)
  {
    this->num_satellites_tracked = _arg;
    return *this;
  }
  Type & set__num_satellites_used_in_solution(
    const uint8_t & _arg)
  {
    this->num_satellites_used_in_solution = _arg;
    return *this;
  }
  Type & set__num_gps_and_glonass_l1_used_in_solution(
    const uint8_t & _arg)
  {
    this->num_gps_and_glonass_l1_used_in_solution = _arg;
    return *this;
  }
  Type & set__num_gps_and_glonass_l1_and_l2_used_in_solution(
    const uint8_t & _arg)
  {
    this->num_gps_and_glonass_l1_and_l2_used_in_solution = _arg;
    return *this;
  }
  Type & set__extended_solution_status(
    const uint32_t & _arg)
  {
    this->extended_solution_status = _arg;
    return *this;
  }
  Type & set__gps_glonass_used_mask(
    const uint32_t & _arg)
  {
    this->gps_glonass_used_mask = _arg;
    return *this;
  }
  Type & set__galileo_beidou_used_mask(
    const uint32_t & _arg)
  {
    this->galileo_beidou_used_mask = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__velocity_latency(
    const float & _arg)
  {
    this->velocity_latency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_localization_msgs__msg__GnssBestPose
    std::shared_ptr<deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_localization_msgs__msg__GnssBestPose
    std::shared_ptr<deva_localization_msgs::msg::GnssBestPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GnssBestPose_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->solution_status != other.solution_status) {
      return false;
    }
    if (this->position_type != other.position_type) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->height_msl != other.height_msl) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->datum_id != other.datum_id) {
      return false;
    }
    if (this->lat_sigma != other.lat_sigma) {
      return false;
    }
    if (this->lon_sigma != other.lon_sigma) {
      return false;
    }
    if (this->height_sigma != other.height_sigma) {
      return false;
    }
    if (this->diff_age != other.diff_age) {
      return false;
    }
    if (this->solution_age != other.solution_age) {
      return false;
    }
    if (this->num_satellites_tracked != other.num_satellites_tracked) {
      return false;
    }
    if (this->num_satellites_used_in_solution != other.num_satellites_used_in_solution) {
      return false;
    }
    if (this->num_gps_and_glonass_l1_used_in_solution != other.num_gps_and_glonass_l1_used_in_solution) {
      return false;
    }
    if (this->num_gps_and_glonass_l1_and_l2_used_in_solution != other.num_gps_and_glonass_l1_and_l2_used_in_solution) {
      return false;
    }
    if (this->extended_solution_status != other.extended_solution_status) {
      return false;
    }
    if (this->gps_glonass_used_mask != other.gps_glonass_used_mask) {
      return false;
    }
    if (this->galileo_beidou_used_mask != other.galileo_beidou_used_mask) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->velocity_latency != other.velocity_latency) {
      return false;
    }
    return true;
  }
  bool operator!=(const GnssBestPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GnssBestPose_

// alias to use template instance with default allocator
using GnssBestPose =
  deva_localization_msgs::msg::GnssBestPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__GNSS_BEST_POSE__STRUCT_HPP_

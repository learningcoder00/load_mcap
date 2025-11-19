// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_ads_msgs:msg/AdsMarker.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__STRUCT_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'detail'
#include "deva_ads_msgs/msg/detail/ads_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_ads_msgs__msg__AdsMarker __attribute__((deprecated))
#else
# define DEPRECATED__deva_ads_msgs__msg__AdsMarker __declspec(deprecated)
#endif

namespace deva_ads_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdsMarker_
{
  using Type = AdsMarker_<ContainerAllocator>;

  explicit AdsMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->clickable = false;
    }
  }

  explicit AdsMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->clickable = false;
    }
  }

  // field types and members
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _clickable_type =
    bool;
  _clickable_type clickable;
  using _detail_type =
    std::vector<deva_ads_msgs::msg::AdsInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_ads_msgs::msg::AdsInfo_<ContainerAllocator>>>;
  _detail_type detail;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__clickable(
    const bool & _arg)
  {
    this->clickable = _arg;
    return *this;
  }
  Type & set__detail(
    const std::vector<deva_ads_msgs::msg::AdsInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_ads_msgs::msg::AdsInfo_<ContainerAllocator>>> & _arg)
  {
    this->detail = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_ads_msgs::msg::AdsMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_ads_msgs::msg::AdsMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_ads_msgs__msg__AdsMarker
    std::shared_ptr<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_ads_msgs__msg__AdsMarker
    std::shared_ptr<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdsMarker_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->clickable != other.clickable) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdsMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdsMarker_

// alias to use template instance with default allocator
using AdsMarker =
  deva_ads_msgs::msg::AdsMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_ads_msgs

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER__STRUCT_HPP_

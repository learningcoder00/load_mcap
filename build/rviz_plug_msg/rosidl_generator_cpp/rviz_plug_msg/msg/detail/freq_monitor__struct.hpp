// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_plug_msg:msg/FreqMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__STRUCT_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__rviz_plug_msg__msg__FreqMonitor __attribute__((deprecated))
#else
# define DEPRECATED__rviz_plug_msg__msg__FreqMonitor __declspec(deprecated)
#endif

namespace rviz_plug_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FreqMonitor_
{
  using Type = FreqMonitor_<ContainerAllocator>;

  explicit FreqMonitor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid_length = 0ul;
    }
  }

  explicit FreqMonitor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid_length = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _valid_length_type =
    uint32_t;
  _valid_length_type valid_length;
  using _topic_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _topic_names_type topic_names;
  using _freqs_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _freqs_type freqs;
  using _min_thresholds_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _min_thresholds_type min_thresholds;
  using _max_thresholds_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _max_thresholds_type max_thresholds;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__valid_length(
    const uint32_t & _arg)
  {
    this->valid_length = _arg;
    return *this;
  }
  Type & set__topic_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->topic_names = _arg;
    return *this;
  }
  Type & set__freqs(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->freqs = _arg;
    return *this;
  }
  Type & set__min_thresholds(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->min_thresholds = _arg;
    return *this;
  }
  Type & set__max_thresholds(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->max_thresholds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_plug_msg__msg__FreqMonitor
    std::shared_ptr<rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_plug_msg__msg__FreqMonitor
    std::shared_ptr<rviz_plug_msg::msg::FreqMonitor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FreqMonitor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->valid_length != other.valid_length) {
      return false;
    }
    if (this->topic_names != other.topic_names) {
      return false;
    }
    if (this->freqs != other.freqs) {
      return false;
    }
    if (this->min_thresholds != other.min_thresholds) {
      return false;
    }
    if (this->max_thresholds != other.max_thresholds) {
      return false;
    }
    return true;
  }
  bool operator!=(const FreqMonitor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FreqMonitor_

// alias to use template instance with default allocator
using FreqMonitor =
  rviz_plug_msg::msg::FreqMonitor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__FREQ_MONITOR__STRUCT_HPP_

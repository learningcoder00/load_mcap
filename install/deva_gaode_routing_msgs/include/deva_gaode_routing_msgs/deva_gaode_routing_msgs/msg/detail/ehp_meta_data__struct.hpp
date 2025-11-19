// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpMetaData __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpMetaData __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EhpMetaData_
{
  using Type = EhpMetaData_<ContainerAllocator>;

  explicit EhpMetaData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meta_country_code = 0;
      this->meta_map_provider = 0;
      this->meta_msg_type = 0;
      this->meta_hw_ver = 0;
      this->meta_prot_ver_minor_sub = 0;
      this->meta_prot_ver_major = 0;
      this->meta_cyc_cnt = 0;
      this->meta_region_code = 0;
      this->meta_drv_side = 0;
      this->meta_map_ver_year = 0;
      this->meta_map_ver_qtr = 0;
      this->meta_prot_ver_minor = 0;
      this->meta_spd_units = 0;
    }
  }

  explicit EhpMetaData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meta_country_code = 0;
      this->meta_map_provider = 0;
      this->meta_msg_type = 0;
      this->meta_hw_ver = 0;
      this->meta_prot_ver_minor_sub = 0;
      this->meta_prot_ver_major = 0;
      this->meta_cyc_cnt = 0;
      this->meta_region_code = 0;
      this->meta_drv_side = 0;
      this->meta_map_ver_year = 0;
      this->meta_map_ver_qtr = 0;
      this->meta_prot_ver_minor = 0;
      this->meta_spd_units = 0;
    }
  }

  // field types and members
  using _meta_country_code_type =
    uint16_t;
  _meta_country_code_type meta_country_code;
  using _meta_map_provider_type =
    uint8_t;
  _meta_map_provider_type meta_map_provider;
  using _meta_msg_type_type =
    uint8_t;
  _meta_msg_type_type meta_msg_type;
  using _meta_hw_ver_type =
    uint16_t;
  _meta_hw_ver_type meta_hw_ver;
  using _meta_prot_ver_minor_sub_type =
    uint8_t;
  _meta_prot_ver_minor_sub_type meta_prot_ver_minor_sub;
  using _meta_prot_ver_major_type =
    uint8_t;
  _meta_prot_ver_major_type meta_prot_ver_major;
  using _meta_cyc_cnt_type =
    uint8_t;
  _meta_cyc_cnt_type meta_cyc_cnt;
  using _meta_region_code_type =
    uint16_t;
  _meta_region_code_type meta_region_code;
  using _meta_drv_side_type =
    uint8_t;
  _meta_drv_side_type meta_drv_side;
  using _meta_map_ver_year_type =
    uint8_t;
  _meta_map_ver_year_type meta_map_ver_year;
  using _meta_map_ver_qtr_type =
    uint8_t;
  _meta_map_ver_qtr_type meta_map_ver_qtr;
  using _meta_prot_ver_minor_type =
    uint8_t;
  _meta_prot_ver_minor_type meta_prot_ver_minor;
  using _meta_spd_units_type =
    uint8_t;
  _meta_spd_units_type meta_spd_units;

  // setters for named parameter idiom
  Type & set__meta_country_code(
    const uint16_t & _arg)
  {
    this->meta_country_code = _arg;
    return *this;
  }
  Type & set__meta_map_provider(
    const uint8_t & _arg)
  {
    this->meta_map_provider = _arg;
    return *this;
  }
  Type & set__meta_msg_type(
    const uint8_t & _arg)
  {
    this->meta_msg_type = _arg;
    return *this;
  }
  Type & set__meta_hw_ver(
    const uint16_t & _arg)
  {
    this->meta_hw_ver = _arg;
    return *this;
  }
  Type & set__meta_prot_ver_minor_sub(
    const uint8_t & _arg)
  {
    this->meta_prot_ver_minor_sub = _arg;
    return *this;
  }
  Type & set__meta_prot_ver_major(
    const uint8_t & _arg)
  {
    this->meta_prot_ver_major = _arg;
    return *this;
  }
  Type & set__meta_cyc_cnt(
    const uint8_t & _arg)
  {
    this->meta_cyc_cnt = _arg;
    return *this;
  }
  Type & set__meta_region_code(
    const uint16_t & _arg)
  {
    this->meta_region_code = _arg;
    return *this;
  }
  Type & set__meta_drv_side(
    const uint8_t & _arg)
  {
    this->meta_drv_side = _arg;
    return *this;
  }
  Type & set__meta_map_ver_year(
    const uint8_t & _arg)
  {
    this->meta_map_ver_year = _arg;
    return *this;
  }
  Type & set__meta_map_ver_qtr(
    const uint8_t & _arg)
  {
    this->meta_map_ver_qtr = _arg;
    return *this;
  }
  Type & set__meta_prot_ver_minor(
    const uint8_t & _arg)
  {
    this->meta_prot_ver_minor = _arg;
    return *this;
  }
  Type & set__meta_spd_units(
    const uint8_t & _arg)
  {
    this->meta_spd_units = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpMetaData
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpMetaData
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EhpMetaData_ & other) const
  {
    if (this->meta_country_code != other.meta_country_code) {
      return false;
    }
    if (this->meta_map_provider != other.meta_map_provider) {
      return false;
    }
    if (this->meta_msg_type != other.meta_msg_type) {
      return false;
    }
    if (this->meta_hw_ver != other.meta_hw_ver) {
      return false;
    }
    if (this->meta_prot_ver_minor_sub != other.meta_prot_ver_minor_sub) {
      return false;
    }
    if (this->meta_prot_ver_major != other.meta_prot_ver_major) {
      return false;
    }
    if (this->meta_cyc_cnt != other.meta_cyc_cnt) {
      return false;
    }
    if (this->meta_region_code != other.meta_region_code) {
      return false;
    }
    if (this->meta_drv_side != other.meta_drv_side) {
      return false;
    }
    if (this->meta_map_ver_year != other.meta_map_ver_year) {
      return false;
    }
    if (this->meta_map_ver_qtr != other.meta_map_ver_qtr) {
      return false;
    }
    if (this->meta_prot_ver_minor != other.meta_prot_ver_minor) {
      return false;
    }
    if (this->meta_spd_units != other.meta_spd_units) {
      return false;
    }
    return true;
  }
  bool operator!=(const EhpMetaData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EhpMetaData_

// alias to use template instance with default allocator
using EhpMetaData =
  deva_gaode_routing_msgs::msg::EhpMetaData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__STRUCT_HPP_

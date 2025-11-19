// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/AppMapInfoToStmStruct.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__AppMapInfoToStmStruct __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__AppMapInfoToStmStruct __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AppMapInfoToStmStruct_
{
  using Type = AppMapInfoToStmStruct_<ContainerAllocator>;

  explicit AppMapInfoToStmStruct_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = 0;
      this->aut_valt_prkg_map_upload_use_map_type2 = 0;
      this->aut_valt_prkg_map_upload_use_map_list1 = 0ul;
      this->aut_valt_prkg_map_upload_use_map_list2 = 0ul;
      this->aut_valt_prkg_map_upload_use_map_list3 = 0ul;
      this->aut_valt_prkg_map_upload_use_map_list4 = 0ul;
    }
  }

  explicit AppMapInfoToStmStruct_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->route_id = 0;
      this->aut_valt_prkg_map_upload_use_map_type2 = 0;
      this->aut_valt_prkg_map_upload_use_map_list1 = 0ul;
      this->aut_valt_prkg_map_upload_use_map_list2 = 0ul;
      this->aut_valt_prkg_map_upload_use_map_list3 = 0ul;
      this->aut_valt_prkg_map_upload_use_map_list4 = 0ul;
    }
  }

  // field types and members
  using _route_id_type =
    uint8_t;
  _route_id_type route_id;
  using _aut_valt_prkg_map_upload_use_map_type2_type =
    uint8_t;
  _aut_valt_prkg_map_upload_use_map_type2_type aut_valt_prkg_map_upload_use_map_type2;
  using _aut_valt_prkg_map_upload_use_map_list1_type =
    uint32_t;
  _aut_valt_prkg_map_upload_use_map_list1_type aut_valt_prkg_map_upload_use_map_list1;
  using _aut_valt_prkg_map_upload_use_map_list2_type =
    uint32_t;
  _aut_valt_prkg_map_upload_use_map_list2_type aut_valt_prkg_map_upload_use_map_list2;
  using _aut_valt_prkg_map_upload_use_map_list3_type =
    uint32_t;
  _aut_valt_prkg_map_upload_use_map_list3_type aut_valt_prkg_map_upload_use_map_list3;
  using _aut_valt_prkg_map_upload_use_map_list4_type =
    uint32_t;
  _aut_valt_prkg_map_upload_use_map_list4_type aut_valt_prkg_map_upload_use_map_list4;

  // setters for named parameter idiom
  Type & set__route_id(
    const uint8_t & _arg)
  {
    this->route_id = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_upload_use_map_type2(
    const uint8_t & _arg)
  {
    this->aut_valt_prkg_map_upload_use_map_type2 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_upload_use_map_list1(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_upload_use_map_list1 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_upload_use_map_list2(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_upload_use_map_list2 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_upload_use_map_list3(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_upload_use_map_list3 = _arg;
    return *this;
  }
  Type & set__aut_valt_prkg_map_upload_use_map_list4(
    const uint32_t & _arg)
  {
    this->aut_valt_prkg_map_upload_use_map_list4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__AppMapInfoToStmStruct
    std::shared_ptr<deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__AppMapInfoToStmStruct
    std::shared_ptr<deva_function_msgs::msg::AppMapInfoToStmStruct_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AppMapInfoToStmStruct_ & other) const
  {
    if (this->route_id != other.route_id) {
      return false;
    }
    if (this->aut_valt_prkg_map_upload_use_map_type2 != other.aut_valt_prkg_map_upload_use_map_type2) {
      return false;
    }
    if (this->aut_valt_prkg_map_upload_use_map_list1 != other.aut_valt_prkg_map_upload_use_map_list1) {
      return false;
    }
    if (this->aut_valt_prkg_map_upload_use_map_list2 != other.aut_valt_prkg_map_upload_use_map_list2) {
      return false;
    }
    if (this->aut_valt_prkg_map_upload_use_map_list3 != other.aut_valt_prkg_map_upload_use_map_list3) {
      return false;
    }
    if (this->aut_valt_prkg_map_upload_use_map_list4 != other.aut_valt_prkg_map_upload_use_map_list4) {
      return false;
    }
    return true;
  }
  bool operator!=(const AppMapInfoToStmStruct_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AppMapInfoToStmStruct_

// alias to use template instance with default allocator
using AppMapInfoToStmStruct =
  deva_function_msgs::msg::AppMapInfoToStmStruct_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_MAP_INFO_TO_STM_STRUCT__STRUCT_HPP_

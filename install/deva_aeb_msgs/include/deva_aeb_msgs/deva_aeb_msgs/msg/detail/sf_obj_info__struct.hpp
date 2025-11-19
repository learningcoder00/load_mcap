// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFObjInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFObjInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFObjInfo __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFObjInfo_
{
  using Type = SFObjInfo_<ContainerAllocator>;

  explicit SFObjInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0f;
      this->width = 0.0f;
      this->hei = 0.0f;
      this->dstlatfrommidoflaneself = 0.0f;
      this->typ = 0;
      this->sidenear = 0;
      this->indcrturn = 0;
      this->indcrbrkli = 0;
      this->indcrhzrdli = 0;
      this->mtnpat = 0;
      this->mtnpathist = 0;
      this->fusnsrcraw = 0;
      this->clisnsideradarctrlwarnqly = 0;
      this->clisnsideradarctrlbrkqly = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  explicit SFObjInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0.0f;
      this->width = 0.0f;
      this->hei = 0.0f;
      this->dstlatfrommidoflaneself = 0.0f;
      this->typ = 0;
      this->sidenear = 0;
      this->indcrturn = 0;
      this->indcrbrkli = 0;
      this->indcrhzrdli = 0;
      this->mtnpat = 0;
      this->mtnpathist = 0;
      this->fusnsrcraw = 0;
      this->clisnsideradarctrlwarnqly = 0;
      this->clisnsideradarctrlbrkqly = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  // field types and members
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;
  using _hei_type =
    float;
  _hei_type hei;
  using _dstlatfrommidoflaneself_type =
    float;
  _dstlatfrommidoflaneself_type dstlatfrommidoflaneself;
  using _typ_type =
    uint8_t;
  _typ_type typ;
  using _sidenear_type =
    uint8_t;
  _sidenear_type sidenear;
  using _indcrturn_type =
    uint8_t;
  _indcrturn_type indcrturn;
  using _indcrbrkli_type =
    uint8_t;
  _indcrbrkli_type indcrbrkli;
  using _indcrhzrdli_type =
    uint8_t;
  _indcrhzrdli_type indcrhzrdli;
  using _mtnpat_type =
    uint8_t;
  _mtnpat_type mtnpat;
  using _mtnpathist_type =
    uint8_t;
  _mtnpathist_type mtnpathist;
  using _fusnsrcraw_type =
    uint8_t;
  _fusnsrcraw_type fusnsrcraw;
  using _clisnsideradarctrlwarnqly_type =
    uint8_t;
  _clisnsideradarctrlwarnqly_type clisnsideradarctrlwarnqly;
  using _clisnsideradarctrlbrkqly_type =
    uint8_t;
  _clisnsideradarctrlbrkqly_type clisnsideradarctrlbrkqly;
  using _reserved_type =
    std::array<uint8_t, 2>;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__hei(
    const float & _arg)
  {
    this->hei = _arg;
    return *this;
  }
  Type & set__dstlatfrommidoflaneself(
    const float & _arg)
  {
    this->dstlatfrommidoflaneself = _arg;
    return *this;
  }
  Type & set__typ(
    const uint8_t & _arg)
  {
    this->typ = _arg;
    return *this;
  }
  Type & set__sidenear(
    const uint8_t & _arg)
  {
    this->sidenear = _arg;
    return *this;
  }
  Type & set__indcrturn(
    const uint8_t & _arg)
  {
    this->indcrturn = _arg;
    return *this;
  }
  Type & set__indcrbrkli(
    const uint8_t & _arg)
  {
    this->indcrbrkli = _arg;
    return *this;
  }
  Type & set__indcrhzrdli(
    const uint8_t & _arg)
  {
    this->indcrhzrdli = _arg;
    return *this;
  }
  Type & set__mtnpat(
    const uint8_t & _arg)
  {
    this->mtnpat = _arg;
    return *this;
  }
  Type & set__mtnpathist(
    const uint8_t & _arg)
  {
    this->mtnpathist = _arg;
    return *this;
  }
  Type & set__fusnsrcraw(
    const uint8_t & _arg)
  {
    this->fusnsrcraw = _arg;
    return *this;
  }
  Type & set__clisnsideradarctrlwarnqly(
    const uint8_t & _arg)
  {
    this->clisnsideradarctrlwarnqly = _arg;
    return *this;
  }
  Type & set__clisnsideradarctrlbrkqly(
    const uint8_t & _arg)
  {
    this->clisnsideradarctrlbrkqly = _arg;
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
    deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFObjInfo
    std::shared_ptr<deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFObjInfo
    std::shared_ptr<deva_aeb_msgs::msg::SFObjInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFObjInfo_ & other) const
  {
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->hei != other.hei) {
      return false;
    }
    if (this->dstlatfrommidoflaneself != other.dstlatfrommidoflaneself) {
      return false;
    }
    if (this->typ != other.typ) {
      return false;
    }
    if (this->sidenear != other.sidenear) {
      return false;
    }
    if (this->indcrturn != other.indcrturn) {
      return false;
    }
    if (this->indcrbrkli != other.indcrbrkli) {
      return false;
    }
    if (this->indcrhzrdli != other.indcrhzrdli) {
      return false;
    }
    if (this->mtnpat != other.mtnpat) {
      return false;
    }
    if (this->mtnpathist != other.mtnpathist) {
      return false;
    }
    if (this->fusnsrcraw != other.fusnsrcraw) {
      return false;
    }
    if (this->clisnsideradarctrlwarnqly != other.clisnsideradarctrlwarnqly) {
      return false;
    }
    if (this->clisnsideradarctrlbrkqly != other.clisnsideradarctrlbrkqly) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFObjInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFObjInfo_

// alias to use template instance with default allocator
using SFObjInfo =
  deva_aeb_msgs::msg::SFObjInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO__STRUCT_HPP_

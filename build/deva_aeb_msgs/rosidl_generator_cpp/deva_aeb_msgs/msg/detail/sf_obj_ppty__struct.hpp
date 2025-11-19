// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFObjPpty __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFObjPpty __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFObjPpty_
{
  using Type = SFObjPpty_<ContainerAllocator>;

  explicit SFObjPpty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idn = 0;
      this->sts = 0;
      this->mdlofmtn = 0;
      this->trfcsceno = 0;
      this->cllsnmtgtnbybrkgprimqly = 0;
      this->cllsnmtgtnbybrkgsecqly = 0;
      this->cllsnwarnfwdqly = 0;
      this->trfcjamassiqly = 0;
      this->dstlatfrommidoflaneselfqly = 0;
      this->emgylanekeepaidposnqly = 0;
      this->fusnsrc = 0;
      this->posnlgtstdde = 0.0f;
      this->posnlatstdde = 0.0f;
      this->agdirstdde = 0.0f;
      this->spdstdde = 0.0f;
      this->astdde = 0.0f;
      this->reserved = 0;
      this->visnid = 0ul;
    }
  }

  explicit SFObjPpty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idn = 0;
      this->sts = 0;
      this->mdlofmtn = 0;
      this->trfcsceno = 0;
      this->cllsnmtgtnbybrkgprimqly = 0;
      this->cllsnmtgtnbybrkgsecqly = 0;
      this->cllsnwarnfwdqly = 0;
      this->trfcjamassiqly = 0;
      this->dstlatfrommidoflaneselfqly = 0;
      this->emgylanekeepaidposnqly = 0;
      this->fusnsrc = 0;
      this->posnlgtstdde = 0.0f;
      this->posnlatstdde = 0.0f;
      this->agdirstdde = 0.0f;
      this->spdstdde = 0.0f;
      this->astdde = 0.0f;
      this->reserved = 0;
      this->visnid = 0ul;
    }
  }

  // field types and members
  using _idn_type =
    uint8_t;
  _idn_type idn;
  using _sts_type =
    uint8_t;
  _sts_type sts;
  using _mdlofmtn_type =
    uint8_t;
  _mdlofmtn_type mdlofmtn;
  using _trfcsceno_type =
    uint8_t;
  _trfcsceno_type trfcsceno;
  using _cllsnmtgtnbybrkgprimqly_type =
    uint8_t;
  _cllsnmtgtnbybrkgprimqly_type cllsnmtgtnbybrkgprimqly;
  using _cllsnmtgtnbybrkgsecqly_type =
    uint8_t;
  _cllsnmtgtnbybrkgsecqly_type cllsnmtgtnbybrkgsecqly;
  using _cllsnwarnfwdqly_type =
    uint8_t;
  _cllsnwarnfwdqly_type cllsnwarnfwdqly;
  using _trfcjamassiqly_type =
    uint8_t;
  _trfcjamassiqly_type trfcjamassiqly;
  using _dstlatfrommidoflaneselfqly_type =
    uint8_t;
  _dstlatfrommidoflaneselfqly_type dstlatfrommidoflaneselfqly;
  using _emgylanekeepaidposnqly_type =
    uint8_t;
  _emgylanekeepaidposnqly_type emgylanekeepaidposnqly;
  using _fusnsrc_type =
    uint8_t;
  _fusnsrc_type fusnsrc;
  using _posnlgtstdde_type =
    float;
  _posnlgtstdde_type posnlgtstdde;
  using _posnlatstdde_type =
    float;
  _posnlatstdde_type posnlatstdde;
  using _agdirstdde_type =
    float;
  _agdirstdde_type agdirstdde;
  using _spdstdde_type =
    float;
  _spdstdde_type spdstdde;
  using _astdde_type =
    float;
  _astdde_type astdde;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _visnid_type =
    uint32_t;
  _visnid_type visnid;

  // setters for named parameter idiom
  Type & set__idn(
    const uint8_t & _arg)
  {
    this->idn = _arg;
    return *this;
  }
  Type & set__sts(
    const uint8_t & _arg)
  {
    this->sts = _arg;
    return *this;
  }
  Type & set__mdlofmtn(
    const uint8_t & _arg)
  {
    this->mdlofmtn = _arg;
    return *this;
  }
  Type & set__trfcsceno(
    const uint8_t & _arg)
  {
    this->trfcsceno = _arg;
    return *this;
  }
  Type & set__cllsnmtgtnbybrkgprimqly(
    const uint8_t & _arg)
  {
    this->cllsnmtgtnbybrkgprimqly = _arg;
    return *this;
  }
  Type & set__cllsnmtgtnbybrkgsecqly(
    const uint8_t & _arg)
  {
    this->cllsnmtgtnbybrkgsecqly = _arg;
    return *this;
  }
  Type & set__cllsnwarnfwdqly(
    const uint8_t & _arg)
  {
    this->cllsnwarnfwdqly = _arg;
    return *this;
  }
  Type & set__trfcjamassiqly(
    const uint8_t & _arg)
  {
    this->trfcjamassiqly = _arg;
    return *this;
  }
  Type & set__dstlatfrommidoflaneselfqly(
    const uint8_t & _arg)
  {
    this->dstlatfrommidoflaneselfqly = _arg;
    return *this;
  }
  Type & set__emgylanekeepaidposnqly(
    const uint8_t & _arg)
  {
    this->emgylanekeepaidposnqly = _arg;
    return *this;
  }
  Type & set__fusnsrc(
    const uint8_t & _arg)
  {
    this->fusnsrc = _arg;
    return *this;
  }
  Type & set__posnlgtstdde(
    const float & _arg)
  {
    this->posnlgtstdde = _arg;
    return *this;
  }
  Type & set__posnlatstdde(
    const float & _arg)
  {
    this->posnlatstdde = _arg;
    return *this;
  }
  Type & set__agdirstdde(
    const float & _arg)
  {
    this->agdirstdde = _arg;
    return *this;
  }
  Type & set__spdstdde(
    const float & _arg)
  {
    this->spdstdde = _arg;
    return *this;
  }
  Type & set__astdde(
    const float & _arg)
  {
    this->astdde = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__visnid(
    const uint32_t & _arg)
  {
    this->visnid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFObjPpty
    std::shared_ptr<deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFObjPpty
    std::shared_ptr<deva_aeb_msgs::msg::SFObjPpty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFObjPpty_ & other) const
  {
    if (this->idn != other.idn) {
      return false;
    }
    if (this->sts != other.sts) {
      return false;
    }
    if (this->mdlofmtn != other.mdlofmtn) {
      return false;
    }
    if (this->trfcsceno != other.trfcsceno) {
      return false;
    }
    if (this->cllsnmtgtnbybrkgprimqly != other.cllsnmtgtnbybrkgprimqly) {
      return false;
    }
    if (this->cllsnmtgtnbybrkgsecqly != other.cllsnmtgtnbybrkgsecqly) {
      return false;
    }
    if (this->cllsnwarnfwdqly != other.cllsnwarnfwdqly) {
      return false;
    }
    if (this->trfcjamassiqly != other.trfcjamassiqly) {
      return false;
    }
    if (this->dstlatfrommidoflaneselfqly != other.dstlatfrommidoflaneselfqly) {
      return false;
    }
    if (this->emgylanekeepaidposnqly != other.emgylanekeepaidposnqly) {
      return false;
    }
    if (this->fusnsrc != other.fusnsrc) {
      return false;
    }
    if (this->posnlgtstdde != other.posnlgtstdde) {
      return false;
    }
    if (this->posnlatstdde != other.posnlatstdde) {
      return false;
    }
    if (this->agdirstdde != other.agdirstdde) {
      return false;
    }
    if (this->spdstdde != other.spdstdde) {
      return false;
    }
    if (this->astdde != other.astdde) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->visnid != other.visnid) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFObjPpty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFObjPpty_

// alias to use template instance with default allocator
using SFObjPpty =
  deva_aeb_msgs::msg::SFObjPpty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__STRUCT_HPP_

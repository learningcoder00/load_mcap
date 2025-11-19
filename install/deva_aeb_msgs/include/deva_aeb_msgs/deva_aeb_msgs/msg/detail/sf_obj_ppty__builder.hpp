// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFObjPpty_visnid
{
public:
  explicit Init_SFObjPpty_visnid(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFObjPpty visnid(::deva_aeb_msgs::msg::SFObjPpty::_visnid_type arg)
  {
    msg_.visnid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_reserved
{
public:
  explicit Init_SFObjPpty_reserved(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_visnid reserved(::deva_aeb_msgs::msg::SFObjPpty::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFObjPpty_visnid(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_astdde
{
public:
  explicit Init_SFObjPpty_astdde(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_reserved astdde(::deva_aeb_msgs::msg::SFObjPpty::_astdde_type arg)
  {
    msg_.astdde = std::move(arg);
    return Init_SFObjPpty_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_spdstdde
{
public:
  explicit Init_SFObjPpty_spdstdde(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_astdde spdstdde(::deva_aeb_msgs::msg::SFObjPpty::_spdstdde_type arg)
  {
    msg_.spdstdde = std::move(arg);
    return Init_SFObjPpty_astdde(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_agdirstdde
{
public:
  explicit Init_SFObjPpty_agdirstdde(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_spdstdde agdirstdde(::deva_aeb_msgs::msg::SFObjPpty::_agdirstdde_type arg)
  {
    msg_.agdirstdde = std::move(arg);
    return Init_SFObjPpty_spdstdde(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_posnlatstdde
{
public:
  explicit Init_SFObjPpty_posnlatstdde(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_agdirstdde posnlatstdde(::deva_aeb_msgs::msg::SFObjPpty::_posnlatstdde_type arg)
  {
    msg_.posnlatstdde = std::move(arg);
    return Init_SFObjPpty_agdirstdde(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_posnlgtstdde
{
public:
  explicit Init_SFObjPpty_posnlgtstdde(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_posnlatstdde posnlgtstdde(::deva_aeb_msgs::msg::SFObjPpty::_posnlgtstdde_type arg)
  {
    msg_.posnlgtstdde = std::move(arg);
    return Init_SFObjPpty_posnlatstdde(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_fusnsrc
{
public:
  explicit Init_SFObjPpty_fusnsrc(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_posnlgtstdde fusnsrc(::deva_aeb_msgs::msg::SFObjPpty::_fusnsrc_type arg)
  {
    msg_.fusnsrc = std::move(arg);
    return Init_SFObjPpty_posnlgtstdde(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_emgylanekeepaidposnqly
{
public:
  explicit Init_SFObjPpty_emgylanekeepaidposnqly(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_fusnsrc emgylanekeepaidposnqly(::deva_aeb_msgs::msg::SFObjPpty::_emgylanekeepaidposnqly_type arg)
  {
    msg_.emgylanekeepaidposnqly = std::move(arg);
    return Init_SFObjPpty_fusnsrc(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_dstlatfrommidoflaneselfqly
{
public:
  explicit Init_SFObjPpty_dstlatfrommidoflaneselfqly(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_emgylanekeepaidposnqly dstlatfrommidoflaneselfqly(::deva_aeb_msgs::msg::SFObjPpty::_dstlatfrommidoflaneselfqly_type arg)
  {
    msg_.dstlatfrommidoflaneselfqly = std::move(arg);
    return Init_SFObjPpty_emgylanekeepaidposnqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_trfcjamassiqly
{
public:
  explicit Init_SFObjPpty_trfcjamassiqly(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_dstlatfrommidoflaneselfqly trfcjamassiqly(::deva_aeb_msgs::msg::SFObjPpty::_trfcjamassiqly_type arg)
  {
    msg_.trfcjamassiqly = std::move(arg);
    return Init_SFObjPpty_dstlatfrommidoflaneselfqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_cllsnwarnfwdqly
{
public:
  explicit Init_SFObjPpty_cllsnwarnfwdqly(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_trfcjamassiqly cllsnwarnfwdqly(::deva_aeb_msgs::msg::SFObjPpty::_cllsnwarnfwdqly_type arg)
  {
    msg_.cllsnwarnfwdqly = std::move(arg);
    return Init_SFObjPpty_trfcjamassiqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_cllsnmtgtnbybrkgsecqly
{
public:
  explicit Init_SFObjPpty_cllsnmtgtnbybrkgsecqly(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_cllsnwarnfwdqly cllsnmtgtnbybrkgsecqly(::deva_aeb_msgs::msg::SFObjPpty::_cllsnmtgtnbybrkgsecqly_type arg)
  {
    msg_.cllsnmtgtnbybrkgsecqly = std::move(arg);
    return Init_SFObjPpty_cllsnwarnfwdqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_cllsnmtgtnbybrkgprimqly
{
public:
  explicit Init_SFObjPpty_cllsnmtgtnbybrkgprimqly(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_cllsnmtgtnbybrkgsecqly cllsnmtgtnbybrkgprimqly(::deva_aeb_msgs::msg::SFObjPpty::_cllsnmtgtnbybrkgprimqly_type arg)
  {
    msg_.cllsnmtgtnbybrkgprimqly = std::move(arg);
    return Init_SFObjPpty_cllsnmtgtnbybrkgsecqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_trfcsceno
{
public:
  explicit Init_SFObjPpty_trfcsceno(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_cllsnmtgtnbybrkgprimqly trfcsceno(::deva_aeb_msgs::msg::SFObjPpty::_trfcsceno_type arg)
  {
    msg_.trfcsceno = std::move(arg);
    return Init_SFObjPpty_cllsnmtgtnbybrkgprimqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_mdlofmtn
{
public:
  explicit Init_SFObjPpty_mdlofmtn(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_trfcsceno mdlofmtn(::deva_aeb_msgs::msg::SFObjPpty::_mdlofmtn_type arg)
  {
    msg_.mdlofmtn = std::move(arg);
    return Init_SFObjPpty_trfcsceno(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_sts
{
public:
  explicit Init_SFObjPpty_sts(::deva_aeb_msgs::msg::SFObjPpty & msg)
  : msg_(msg)
  {}
  Init_SFObjPpty_mdlofmtn sts(::deva_aeb_msgs::msg::SFObjPpty::_sts_type arg)
  {
    msg_.sts = std::move(arg);
    return Init_SFObjPpty_mdlofmtn(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

class Init_SFObjPpty_idn
{
public:
  Init_SFObjPpty_idn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFObjPpty_sts idn(::deva_aeb_msgs::msg::SFObjPpty::_idn_type arg)
  {
    msg_.idn = std::move(arg);
    return Init_SFObjPpty_sts(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjPpty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFObjPpty>()
{
  return deva_aeb_msgs::msg::builder::Init_SFObjPpty_idn();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__BUILDER_HPP_

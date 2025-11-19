// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFObjInfoNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO_NOA__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO_NOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFObjInfoNOA_lan_assignment
{
public:
  explicit Init_SFObjInfoNOA_lan_assignment(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFObjInfoNOA lan_assignment(::deva_aeb_msgs::msg::SFObjInfoNOA::_lan_assignment_type arg)
  {
    msg_.lan_assignment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_reserved
{
public:
  explicit Init_SFObjInfoNOA_reserved(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_lan_assignment reserved(::deva_aeb_msgs::msg::SFObjInfoNOA::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFObjInfoNOA_lan_assignment(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_clisnsideradarctrlbrkqly
{
public:
  explicit Init_SFObjInfoNOA_clisnsideradarctrlbrkqly(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_reserved clisnsideradarctrlbrkqly(::deva_aeb_msgs::msg::SFObjInfoNOA::_clisnsideradarctrlbrkqly_type arg)
  {
    msg_.clisnsideradarctrlbrkqly = std::move(arg);
    return Init_SFObjInfoNOA_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_clisnsideradarctrlwarnqly
{
public:
  explicit Init_SFObjInfoNOA_clisnsideradarctrlwarnqly(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_clisnsideradarctrlbrkqly clisnsideradarctrlwarnqly(::deva_aeb_msgs::msg::SFObjInfoNOA::_clisnsideradarctrlwarnqly_type arg)
  {
    msg_.clisnsideradarctrlwarnqly = std::move(arg);
    return Init_SFObjInfoNOA_clisnsideradarctrlbrkqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_fusnsrcraw
{
public:
  explicit Init_SFObjInfoNOA_fusnsrcraw(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_clisnsideradarctrlwarnqly fusnsrcraw(::deva_aeb_msgs::msg::SFObjInfoNOA::_fusnsrcraw_type arg)
  {
    msg_.fusnsrcraw = std::move(arg);
    return Init_SFObjInfoNOA_clisnsideradarctrlwarnqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_mtnpathist
{
public:
  explicit Init_SFObjInfoNOA_mtnpathist(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_fusnsrcraw mtnpathist(::deva_aeb_msgs::msg::SFObjInfoNOA::_mtnpathist_type arg)
  {
    msg_.mtnpathist = std::move(arg);
    return Init_SFObjInfoNOA_fusnsrcraw(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_mtnpat
{
public:
  explicit Init_SFObjInfoNOA_mtnpat(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_mtnpathist mtnpat(::deva_aeb_msgs::msg::SFObjInfoNOA::_mtnpat_type arg)
  {
    msg_.mtnpat = std::move(arg);
    return Init_SFObjInfoNOA_mtnpathist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_indcrhzrdli
{
public:
  explicit Init_SFObjInfoNOA_indcrhzrdli(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_mtnpat indcrhzrdli(::deva_aeb_msgs::msg::SFObjInfoNOA::_indcrhzrdli_type arg)
  {
    msg_.indcrhzrdli = std::move(arg);
    return Init_SFObjInfoNOA_mtnpat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_indcrbrkli
{
public:
  explicit Init_SFObjInfoNOA_indcrbrkli(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_indcrhzrdli indcrbrkli(::deva_aeb_msgs::msg::SFObjInfoNOA::_indcrbrkli_type arg)
  {
    msg_.indcrbrkli = std::move(arg);
    return Init_SFObjInfoNOA_indcrhzrdli(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_indcrturn
{
public:
  explicit Init_SFObjInfoNOA_indcrturn(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_indcrbrkli indcrturn(::deva_aeb_msgs::msg::SFObjInfoNOA::_indcrturn_type arg)
  {
    msg_.indcrturn = std::move(arg);
    return Init_SFObjInfoNOA_indcrbrkli(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_sidenear
{
public:
  explicit Init_SFObjInfoNOA_sidenear(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_indcrturn sidenear(::deva_aeb_msgs::msg::SFObjInfoNOA::_sidenear_type arg)
  {
    msg_.sidenear = std::move(arg);
    return Init_SFObjInfoNOA_indcrturn(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_typ
{
public:
  explicit Init_SFObjInfoNOA_typ(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_sidenear typ(::deva_aeb_msgs::msg::SFObjInfoNOA::_typ_type arg)
  {
    msg_.typ = std::move(arg);
    return Init_SFObjInfoNOA_sidenear(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_dstlatfrommidoflaneself
{
public:
  explicit Init_SFObjInfoNOA_dstlatfrommidoflaneself(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_typ dstlatfrommidoflaneself(::deva_aeb_msgs::msg::SFObjInfoNOA::_dstlatfrommidoflaneself_type arg)
  {
    msg_.dstlatfrommidoflaneself = std::move(arg);
    return Init_SFObjInfoNOA_typ(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_hei
{
public:
  explicit Init_SFObjInfoNOA_hei(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_dstlatfrommidoflaneself hei(::deva_aeb_msgs::msg::SFObjInfoNOA::_hei_type arg)
  {
    msg_.hei = std::move(arg);
    return Init_SFObjInfoNOA_dstlatfrommidoflaneself(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_width
{
public:
  explicit Init_SFObjInfoNOA_width(::deva_aeb_msgs::msg::SFObjInfoNOA & msg)
  : msg_(msg)
  {}
  Init_SFObjInfoNOA_hei width(::deva_aeb_msgs::msg::SFObjInfoNOA::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SFObjInfoNOA_hei(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

class Init_SFObjInfoNOA_length
{
public:
  Init_SFObjInfoNOA_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFObjInfoNOA_width length(::deva_aeb_msgs::msg::SFObjInfoNOA::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_SFObjInfoNOA_width(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfoNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFObjInfoNOA>()
{
  return deva_aeb_msgs::msg::builder::Init_SFObjInfoNOA_length();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO_NOA__BUILDER_HPP_

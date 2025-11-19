// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFObjInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_obj_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFObjInfo_reserved
{
public:
  explicit Init_SFObjInfo_reserved(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFObjInfo reserved(::deva_aeb_msgs::msg::SFObjInfo::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_clisnsideradarctrlbrkqly
{
public:
  explicit Init_SFObjInfo_clisnsideradarctrlbrkqly(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_reserved clisnsideradarctrlbrkqly(::deva_aeb_msgs::msg::SFObjInfo::_clisnsideradarctrlbrkqly_type arg)
  {
    msg_.clisnsideradarctrlbrkqly = std::move(arg);
    return Init_SFObjInfo_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_clisnsideradarctrlwarnqly
{
public:
  explicit Init_SFObjInfo_clisnsideradarctrlwarnqly(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_clisnsideradarctrlbrkqly clisnsideradarctrlwarnqly(::deva_aeb_msgs::msg::SFObjInfo::_clisnsideradarctrlwarnqly_type arg)
  {
    msg_.clisnsideradarctrlwarnqly = std::move(arg);
    return Init_SFObjInfo_clisnsideradarctrlbrkqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_fusnsrcraw
{
public:
  explicit Init_SFObjInfo_fusnsrcraw(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_clisnsideradarctrlwarnqly fusnsrcraw(::deva_aeb_msgs::msg::SFObjInfo::_fusnsrcraw_type arg)
  {
    msg_.fusnsrcraw = std::move(arg);
    return Init_SFObjInfo_clisnsideradarctrlwarnqly(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_mtnpathist
{
public:
  explicit Init_SFObjInfo_mtnpathist(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_fusnsrcraw mtnpathist(::deva_aeb_msgs::msg::SFObjInfo::_mtnpathist_type arg)
  {
    msg_.mtnpathist = std::move(arg);
    return Init_SFObjInfo_fusnsrcraw(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_mtnpat
{
public:
  explicit Init_SFObjInfo_mtnpat(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_mtnpathist mtnpat(::deva_aeb_msgs::msg::SFObjInfo::_mtnpat_type arg)
  {
    msg_.mtnpat = std::move(arg);
    return Init_SFObjInfo_mtnpathist(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_indcrhzrdli
{
public:
  explicit Init_SFObjInfo_indcrhzrdli(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_mtnpat indcrhzrdli(::deva_aeb_msgs::msg::SFObjInfo::_indcrhzrdli_type arg)
  {
    msg_.indcrhzrdli = std::move(arg);
    return Init_SFObjInfo_mtnpat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_indcrbrkli
{
public:
  explicit Init_SFObjInfo_indcrbrkli(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_indcrhzrdli indcrbrkli(::deva_aeb_msgs::msg::SFObjInfo::_indcrbrkli_type arg)
  {
    msg_.indcrbrkli = std::move(arg);
    return Init_SFObjInfo_indcrhzrdli(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_indcrturn
{
public:
  explicit Init_SFObjInfo_indcrturn(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_indcrbrkli indcrturn(::deva_aeb_msgs::msg::SFObjInfo::_indcrturn_type arg)
  {
    msg_.indcrturn = std::move(arg);
    return Init_SFObjInfo_indcrbrkli(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_sidenear
{
public:
  explicit Init_SFObjInfo_sidenear(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_indcrturn sidenear(::deva_aeb_msgs::msg::SFObjInfo::_sidenear_type arg)
  {
    msg_.sidenear = std::move(arg);
    return Init_SFObjInfo_indcrturn(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_typ
{
public:
  explicit Init_SFObjInfo_typ(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_sidenear typ(::deva_aeb_msgs::msg::SFObjInfo::_typ_type arg)
  {
    msg_.typ = std::move(arg);
    return Init_SFObjInfo_sidenear(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_dstlatfrommidoflaneself
{
public:
  explicit Init_SFObjInfo_dstlatfrommidoflaneself(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_typ dstlatfrommidoflaneself(::deva_aeb_msgs::msg::SFObjInfo::_dstlatfrommidoflaneself_type arg)
  {
    msg_.dstlatfrommidoflaneself = std::move(arg);
    return Init_SFObjInfo_typ(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_hei
{
public:
  explicit Init_SFObjInfo_hei(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_dstlatfrommidoflaneself hei(::deva_aeb_msgs::msg::SFObjInfo::_hei_type arg)
  {
    msg_.hei = std::move(arg);
    return Init_SFObjInfo_dstlatfrommidoflaneself(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_width
{
public:
  explicit Init_SFObjInfo_width(::deva_aeb_msgs::msg::SFObjInfo & msg)
  : msg_(msg)
  {}
  Init_SFObjInfo_hei width(::deva_aeb_msgs::msg::SFObjInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SFObjInfo_hei(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

class Init_SFObjInfo_length
{
public:
  Init_SFObjInfo_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFObjInfo_width length(::deva_aeb_msgs::msg::SFObjInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_SFObjInfo_width(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFObjInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFObjInfo>()
{
  return deva_aeb_msgs::msg::builder::Init_SFObjInfo_length();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFCrosswalk.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_crosswalk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFCrosswalk_reserved
{
public:
  explicit Init_SFCrosswalk_reserved(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFCrosswalk reserved(::deva_aeb_msgs::msg::SFCrosswalk::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_confi
{
public:
  explicit Init_SFCrosswalk_confi(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_reserved confi(::deva_aeb_msgs::msg::SFCrosswalk::_confi_type arg)
  {
    msg_.confi = std::move(arg);
    return Init_SFCrosswalk_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_ldpointposlat
{
public:
  explicit Init_SFCrosswalk_ldpointposlat(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_confi ldpointposlat(::deva_aeb_msgs::msg::SFCrosswalk::_ldpointposlat_type arg)
  {
    msg_.ldpointposlat = std::move(arg);
    return Init_SFCrosswalk_confi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_ldpointposlgt
{
public:
  explicit Init_SFCrosswalk_ldpointposlgt(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_ldpointposlat ldpointposlgt(::deva_aeb_msgs::msg::SFCrosswalk::_ldpointposlgt_type arg)
  {
    msg_.ldpointposlgt = std::move(arg);
    return Init_SFCrosswalk_ldpointposlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_rdpointposlat
{
public:
  explicit Init_SFCrosswalk_rdpointposlat(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_ldpointposlgt rdpointposlat(::deva_aeb_msgs::msg::SFCrosswalk::_rdpointposlat_type arg)
  {
    msg_.rdpointposlat = std::move(arg);
    return Init_SFCrosswalk_ldpointposlgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_rdpointposlgt
{
public:
  explicit Init_SFCrosswalk_rdpointposlgt(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_rdpointposlat rdpointposlgt(::deva_aeb_msgs::msg::SFCrosswalk::_rdpointposlgt_type arg)
  {
    msg_.rdpointposlgt = std::move(arg);
    return Init_SFCrosswalk_rdpointposlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_rupointposlat
{
public:
  explicit Init_SFCrosswalk_rupointposlat(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_rdpointposlgt rupointposlat(::deva_aeb_msgs::msg::SFCrosswalk::_rupointposlat_type arg)
  {
    msg_.rupointposlat = std::move(arg);
    return Init_SFCrosswalk_rdpointposlgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_rupointposlgt
{
public:
  explicit Init_SFCrosswalk_rupointposlgt(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_rupointposlat rupointposlgt(::deva_aeb_msgs::msg::SFCrosswalk::_rupointposlgt_type arg)
  {
    msg_.rupointposlgt = std::move(arg);
    return Init_SFCrosswalk_rupointposlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_lupointposlat
{
public:
  explicit Init_SFCrosswalk_lupointposlat(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_rupointposlgt lupointposlat(::deva_aeb_msgs::msg::SFCrosswalk::_lupointposlat_type arg)
  {
    msg_.lupointposlat = std::move(arg);
    return Init_SFCrosswalk_rupointposlgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_lupointposlgt
{
public:
  explicit Init_SFCrosswalk_lupointposlgt(::deva_aeb_msgs::msg::SFCrosswalk & msg)
  : msg_(msg)
  {}
  Init_SFCrosswalk_lupointposlat lupointposlgt(::deva_aeb_msgs::msg::SFCrosswalk::_lupointposlgt_type arg)
  {
    msg_.lupointposlgt = std::move(arg);
    return Init_SFCrosswalk_lupointposlat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

class Init_SFCrosswalk_id
{
public:
  Init_SFCrosswalk_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFCrosswalk_lupointposlgt id(::deva_aeb_msgs::msg::SFCrosswalk::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFCrosswalk_lupointposlgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFCrosswalk msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFCrosswalk>()
{
  return deva_aeb_msgs::msg::builder::Init_SFCrosswalk_id();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__BUILDER_HPP_

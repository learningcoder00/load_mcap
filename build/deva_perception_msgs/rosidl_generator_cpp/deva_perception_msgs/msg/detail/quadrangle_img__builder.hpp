// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/QuadrangleImg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/quadrangle_img__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_QuadrangleImg_imgldpointposv
{
public:
  explicit Init_QuadrangleImg_imgldpointposv(::deva_perception_msgs::msg::QuadrangleImg & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::QuadrangleImg imgldpointposv(::deva_perception_msgs::msg::QuadrangleImg::_imgldpointposv_type arg)
  {
    msg_.imgldpointposv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleImg msg_;
};

class Init_QuadrangleImg_imgldpointposu
{
public:
  explicit Init_QuadrangleImg_imgldpointposu(::deva_perception_msgs::msg::QuadrangleImg & msg)
  : msg_(msg)
  {}
  Init_QuadrangleImg_imgldpointposv imgldpointposu(::deva_perception_msgs::msg::QuadrangleImg::_imgldpointposu_type arg)
  {
    msg_.imgldpointposu = std::move(arg);
    return Init_QuadrangleImg_imgldpointposv(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleImg msg_;
};

class Init_QuadrangleImg_imgrdpointposv
{
public:
  explicit Init_QuadrangleImg_imgrdpointposv(::deva_perception_msgs::msg::QuadrangleImg & msg)
  : msg_(msg)
  {}
  Init_QuadrangleImg_imgldpointposu imgrdpointposv(::deva_perception_msgs::msg::QuadrangleImg::_imgrdpointposv_type arg)
  {
    msg_.imgrdpointposv = std::move(arg);
    return Init_QuadrangleImg_imgldpointposu(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleImg msg_;
};

class Init_QuadrangleImg_imgrdpointposu
{
public:
  explicit Init_QuadrangleImg_imgrdpointposu(::deva_perception_msgs::msg::QuadrangleImg & msg)
  : msg_(msg)
  {}
  Init_QuadrangleImg_imgrdpointposv imgrdpointposu(::deva_perception_msgs::msg::QuadrangleImg::_imgrdpointposu_type arg)
  {
    msg_.imgrdpointposu = std::move(arg);
    return Init_QuadrangleImg_imgrdpointposv(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleImg msg_;
};

class Init_QuadrangleImg_imgrupointposv
{
public:
  explicit Init_QuadrangleImg_imgrupointposv(::deva_perception_msgs::msg::QuadrangleImg & msg)
  : msg_(msg)
  {}
  Init_QuadrangleImg_imgrdpointposu imgrupointposv(::deva_perception_msgs::msg::QuadrangleImg::_imgrupointposv_type arg)
  {
    msg_.imgrupointposv = std::move(arg);
    return Init_QuadrangleImg_imgrdpointposu(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleImg msg_;
};

class Init_QuadrangleImg_imgrupointposu
{
public:
  explicit Init_QuadrangleImg_imgrupointposu(::deva_perception_msgs::msg::QuadrangleImg & msg)
  : msg_(msg)
  {}
  Init_QuadrangleImg_imgrupointposv imgrupointposu(::deva_perception_msgs::msg::QuadrangleImg::_imgrupointposu_type arg)
  {
    msg_.imgrupointposu = std::move(arg);
    return Init_QuadrangleImg_imgrupointposv(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleImg msg_;
};

class Init_QuadrangleImg_imglupointposv
{
public:
  explicit Init_QuadrangleImg_imglupointposv(::deva_perception_msgs::msg::QuadrangleImg & msg)
  : msg_(msg)
  {}
  Init_QuadrangleImg_imgrupointposu imglupointposv(::deva_perception_msgs::msg::QuadrangleImg::_imglupointposv_type arg)
  {
    msg_.imglupointposv = std::move(arg);
    return Init_QuadrangleImg_imgrupointposu(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleImg msg_;
};

class Init_QuadrangleImg_imglupointposu
{
public:
  Init_QuadrangleImg_imglupointposu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuadrangleImg_imglupointposv imglupointposu(::deva_perception_msgs::msg::QuadrangleImg::_imglupointposu_type arg)
  {
    msg_.imglupointposu = std::move(arg);
    return Init_QuadrangleImg_imglupointposv(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleImg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::QuadrangleImg>()
{
  return deva_perception_msgs::msg::builder::Init_QuadrangleImg_imglupointposu();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__BUILDER_HPP_

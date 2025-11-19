// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/IPMImage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/ipm_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_IPMImage_pubtime
{
public:
  explicit Init_IPMImage_pubtime(::deva_perception_msgs::msg::IPMImage & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::IPMImage pubtime(::deva_perception_msgs::msg::IPMImage::_pubtime_type arg)
  {
    msg_.pubtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::IPMImage msg_;
};

class Init_IPMImage_ipm_image
{
public:
  explicit Init_IPMImage_ipm_image(::deva_perception_msgs::msg::IPMImage & msg)
  : msg_(msg)
  {}
  Init_IPMImage_pubtime ipm_image(::deva_perception_msgs::msg::IPMImage::_ipm_image_type arg)
  {
    msg_.ipm_image = std::move(arg);
    return Init_IPMImage_pubtime(msg_);
  }

private:
  ::deva_perception_msgs::msg::IPMImage msg_;
};

class Init_IPMImage_header
{
public:
  Init_IPMImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IPMImage_ipm_image header(::deva_perception_msgs::msg::IPMImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IPMImage_ipm_image(msg_);
  }

private:
  ::deva_perception_msgs::msg::IPMImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::IPMImage>()
{
  return deva_perception_msgs::msg::builder::Init_IPMImage_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IPM_IMAGE__BUILDER_HPP_

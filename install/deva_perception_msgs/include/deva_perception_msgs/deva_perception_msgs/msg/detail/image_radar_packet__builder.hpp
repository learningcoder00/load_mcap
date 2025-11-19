// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/ImageRadarPacket.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/image_radar_packet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageRadarPacket_is_bigendian
{
public:
  explicit Init_ImageRadarPacket_is_bigendian(::deva_perception_msgs::msg::ImageRadarPacket & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::ImageRadarPacket is_bigendian(::deva_perception_msgs::msg::ImageRadarPacket::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::ImageRadarPacket msg_;
};

class Init_ImageRadarPacket_type
{
public:
  explicit Init_ImageRadarPacket_type(::deva_perception_msgs::msg::ImageRadarPacket & msg)
  : msg_(msg)
  {}
  Init_ImageRadarPacket_is_bigendian type(::deva_perception_msgs::msg::ImageRadarPacket::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ImageRadarPacket_is_bigendian(msg_);
  }

private:
  ::deva_perception_msgs::msg::ImageRadarPacket msg_;
};

class Init_ImageRadarPacket_size
{
public:
  explicit Init_ImageRadarPacket_size(::deva_perception_msgs::msg::ImageRadarPacket & msg)
  : msg_(msg)
  {}
  Init_ImageRadarPacket_type size(::deva_perception_msgs::msg::ImageRadarPacket::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_ImageRadarPacket_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::ImageRadarPacket msg_;
};

class Init_ImageRadarPacket_data
{
public:
  explicit Init_ImageRadarPacket_data(::deva_perception_msgs::msg::ImageRadarPacket & msg)
  : msg_(msg)
  {}
  Init_ImageRadarPacket_size data(::deva_perception_msgs::msg::ImageRadarPacket::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ImageRadarPacket_size(msg_);
  }

private:
  ::deva_perception_msgs::msg::ImageRadarPacket msg_;
};

class Init_ImageRadarPacket_stamp
{
public:
  Init_ImageRadarPacket_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageRadarPacket_data stamp(::deva_perception_msgs::msg::ImageRadarPacket::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ImageRadarPacket_data(msg_);
  }

private:
  ::deva_perception_msgs::msg::ImageRadarPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::ImageRadarPacket>()
{
  return deva_perception_msgs::msg::builder::Init_ImageRadarPacket_stamp();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGE_RADAR_PACKET__BUILDER_HPP_

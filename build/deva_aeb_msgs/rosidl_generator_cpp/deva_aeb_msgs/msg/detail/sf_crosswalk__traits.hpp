// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFCrosswalk.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_crosswalk__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFCrosswalk & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: lupointposlgt
  {
    out << "lupointposlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.lupointposlgt, out);
    out << ", ";
  }

  // member: lupointposlat
  {
    out << "lupointposlat: ";
    rosidl_generator_traits::value_to_yaml(msg.lupointposlat, out);
    out << ", ";
  }

  // member: rupointposlgt
  {
    out << "rupointposlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.rupointposlgt, out);
    out << ", ";
  }

  // member: rupointposlat
  {
    out << "rupointposlat: ";
    rosidl_generator_traits::value_to_yaml(msg.rupointposlat, out);
    out << ", ";
  }

  // member: rdpointposlgt
  {
    out << "rdpointposlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.rdpointposlgt, out);
    out << ", ";
  }

  // member: rdpointposlat
  {
    out << "rdpointposlat: ";
    rosidl_generator_traits::value_to_yaml(msg.rdpointposlat, out);
    out << ", ";
  }

  // member: ldpointposlgt
  {
    out << "ldpointposlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.ldpointposlgt, out);
    out << ", ";
  }

  // member: ldpointposlat
  {
    out << "ldpointposlat: ";
    rosidl_generator_traits::value_to_yaml(msg.ldpointposlat, out);
    out << ", ";
  }

  // member: confi
  {
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << ", ";
  }

  // member: reserved
  {
    if (msg.reserved.size() == 0) {
      out << "reserved: []";
    } else {
      out << "reserved: [";
      size_t pending_items = msg.reserved.size();
      for (auto item : msg.reserved) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFCrosswalk & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: lupointposlgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lupointposlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.lupointposlgt, out);
    out << "\n";
  }

  // member: lupointposlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lupointposlat: ";
    rosidl_generator_traits::value_to_yaml(msg.lupointposlat, out);
    out << "\n";
  }

  // member: rupointposlgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rupointposlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.rupointposlgt, out);
    out << "\n";
  }

  // member: rupointposlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rupointposlat: ";
    rosidl_generator_traits::value_to_yaml(msg.rupointposlat, out);
    out << "\n";
  }

  // member: rdpointposlgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rdpointposlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.rdpointposlgt, out);
    out << "\n";
  }

  // member: rdpointposlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rdpointposlat: ";
    rosidl_generator_traits::value_to_yaml(msg.rdpointposlat, out);
    out << "\n";
  }

  // member: ldpointposlgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ldpointposlgt: ";
    rosidl_generator_traits::value_to_yaml(msg.ldpointposlgt, out);
    out << "\n";
  }

  // member: ldpointposlat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ldpointposlat: ";
    rosidl_generator_traits::value_to_yaml(msg.ldpointposlat, out);
    out << "\n";
  }

  // member: confi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confi: ";
    rosidl_generator_traits::value_to_yaml(msg.confi, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserved.size() == 0) {
      out << "reserved: []\n";
    } else {
      out << "reserved:\n";
      for (auto item : msg.reserved) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFCrosswalk & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_aeb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_aeb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_aeb_msgs::msg::SFCrosswalk & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFCrosswalk & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFCrosswalk>()
{
  return "deva_aeb_msgs::msg::SFCrosswalk";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFCrosswalk>()
{
  return "deva_aeb_msgs/msg/SFCrosswalk";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFCrosswalk>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFCrosswalk>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFCrosswalk>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__TRAITS_HPP_

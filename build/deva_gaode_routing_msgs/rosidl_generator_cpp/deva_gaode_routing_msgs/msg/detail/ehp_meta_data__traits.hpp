// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EhpMetaData & msg,
  std::ostream & out)
{
  out << "{";
  // member: meta_country_code
  {
    out << "meta_country_code: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_country_code, out);
    out << ", ";
  }

  // member: meta_map_provider
  {
    out << "meta_map_provider: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_map_provider, out);
    out << ", ";
  }

  // member: meta_msg_type
  {
    out << "meta_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_msg_type, out);
    out << ", ";
  }

  // member: meta_hw_ver
  {
    out << "meta_hw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_hw_ver, out);
    out << ", ";
  }

  // member: meta_prot_ver_minor_sub
  {
    out << "meta_prot_ver_minor_sub: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_prot_ver_minor_sub, out);
    out << ", ";
  }

  // member: meta_prot_ver_major
  {
    out << "meta_prot_ver_major: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_prot_ver_major, out);
    out << ", ";
  }

  // member: meta_cyc_cnt
  {
    out << "meta_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_cyc_cnt, out);
    out << ", ";
  }

  // member: meta_region_code
  {
    out << "meta_region_code: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_region_code, out);
    out << ", ";
  }

  // member: meta_drv_side
  {
    out << "meta_drv_side: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_drv_side, out);
    out << ", ";
  }

  // member: meta_map_ver_year
  {
    out << "meta_map_ver_year: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_map_ver_year, out);
    out << ", ";
  }

  // member: meta_map_ver_qtr
  {
    out << "meta_map_ver_qtr: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_map_ver_qtr, out);
    out << ", ";
  }

  // member: meta_prot_ver_minor
  {
    out << "meta_prot_ver_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_prot_ver_minor, out);
    out << ", ";
  }

  // member: meta_spd_units
  {
    out << "meta_spd_units: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_spd_units, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EhpMetaData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: meta_country_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_country_code: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_country_code, out);
    out << "\n";
  }

  // member: meta_map_provider
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_map_provider: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_map_provider, out);
    out << "\n";
  }

  // member: meta_msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_msg_type, out);
    out << "\n";
  }

  // member: meta_hw_ver
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_hw_ver: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_hw_ver, out);
    out << "\n";
  }

  // member: meta_prot_ver_minor_sub
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_prot_ver_minor_sub: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_prot_ver_minor_sub, out);
    out << "\n";
  }

  // member: meta_prot_ver_major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_prot_ver_major: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_prot_ver_major, out);
    out << "\n";
  }

  // member: meta_cyc_cnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_cyc_cnt: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_cyc_cnt, out);
    out << "\n";
  }

  // member: meta_region_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_region_code: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_region_code, out);
    out << "\n";
  }

  // member: meta_drv_side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_drv_side: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_drv_side, out);
    out << "\n";
  }

  // member: meta_map_ver_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_map_ver_year: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_map_ver_year, out);
    out << "\n";
  }

  // member: meta_map_ver_qtr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_map_ver_qtr: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_map_ver_qtr, out);
    out << "\n";
  }

  // member: meta_prot_ver_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_prot_ver_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_prot_ver_minor, out);
    out << "\n";
  }

  // member: meta_spd_units
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meta_spd_units: ";
    rosidl_generator_traits::value_to_yaml(msg.meta_spd_units, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EhpMetaData & msg, bool use_flow_style = false)
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

}  // namespace deva_gaode_routing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_gaode_routing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_gaode_routing_msgs::msg::EhpMetaData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::EhpMetaData & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::EhpMetaData>()
{
  return "deva_gaode_routing_msgs::msg::EhpMetaData";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::EhpMetaData>()
{
  return "deva_gaode_routing_msgs/msg/EhpMetaData";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::EhpMetaData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::EhpMetaData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::EhpMetaData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_META_DATA__TRAITS_HPP_

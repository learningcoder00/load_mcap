// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'navi_route'
#include "deva_gaode_routing_msgs/msg/detail/nav_route__traits.hpp"
// Member 'paths'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path__traits.hpp"
// Member 'links'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_link__traits.hpp"
// Member 'path_splits'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__traits.hpp"
// Member 'path_merges'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_merge__traits.hpp"
// Member 'sd_nodes'
#include "deva_gaode_routing_msgs/msg/detail/sd_node__traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SdProMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: city_code
  {
    out << "city_code: ";
    rosidl_generator_traits::value_to_yaml(msg.city_code, out);
    out << ", ";
  }

  // member: navi_route
  {
    out << "navi_route: ";
    to_flow_style_yaml(msg.navi_route, out);
    out << ", ";
  }

  // member: paths
  {
    if (msg.paths.size() == 0) {
      out << "paths: []";
    } else {
      out << "paths: [";
      size_t pending_items = msg.paths.size();
      for (auto item : msg.paths) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: links
  {
    if (msg.links.size() == 0) {
      out << "links: []";
    } else {
      out << "links: [";
      size_t pending_items = msg.links.size();
      for (auto item : msg.links) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_splits
  {
    if (msg.path_splits.size() == 0) {
      out << "path_splits: []";
    } else {
      out << "path_splits: [";
      size_t pending_items = msg.path_splits.size();
      for (auto item : msg.path_splits) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: path_merges
  {
    if (msg.path_merges.size() == 0) {
      out << "path_merges: []";
    } else {
      out << "path_merges: [";
      size_t pending_items = msg.path_merges.size();
      for (auto item : msg.path_merges) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sd_nodes
  {
    if (msg.sd_nodes.size() == 0) {
      out << "sd_nodes: []";
    } else {
      out << "sd_nodes: [";
      size_t pending_items = msg.sd_nodes.size();
      for (auto item : msg.sd_nodes) {
        to_flow_style_yaml(item, out);
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
  const SdProMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: city_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "city_code: ";
    rosidl_generator_traits::value_to_yaml(msg.city_code, out);
    out << "\n";
  }

  // member: navi_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "navi_route:\n";
    to_block_style_yaml(msg.navi_route, out, indentation + 2);
  }

  // member: paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.paths.size() == 0) {
      out << "paths: []\n";
    } else {
      out << "paths:\n";
      for (auto item : msg.paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: links
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.links.size() == 0) {
      out << "links: []\n";
    } else {
      out << "links:\n";
      for (auto item : msg.links) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: path_splits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_splits.size() == 0) {
      out << "path_splits: []\n";
    } else {
      out << "path_splits:\n";
      for (auto item : msg.path_splits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: path_merges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path_merges.size() == 0) {
      out << "path_merges: []\n";
    } else {
      out << "path_merges:\n";
      for (auto item : msg.path_merges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sd_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sd_nodes.size() == 0) {
      out << "sd_nodes: []\n";
    } else {
      out << "sd_nodes:\n";
      for (auto item : msg.sd_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SdProMap & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SdProMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SdProMap & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SdProMap>()
{
  return "deva_gaode_routing_msgs::msg::SdProMap";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SdProMap>()
{
  return "deva_gaode_routing_msgs/msg/SdProMap";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SdProMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SdProMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SdProMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__TRAITS_HPP_

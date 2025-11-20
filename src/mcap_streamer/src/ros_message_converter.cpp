#include "mcap_streamer/ros_message_converter.hpp"
#include <sstream>
#include <typeinfo>
#include <algorithm>
#include <deva_perception_msgs/msg/rv_dyn_obstacle_list.hpp>
#include <deva_perception_msgs/msg/rv_dyn_obstacle.hpp>

namespace mcap_streamer
{

// 辅助函数：转换 RVDynObstacleList
MessageMap rv_dyn_obstacle_list_to_map(const deva_perception_msgs::msg::RVDynObstacleList& msg) {
    MessageMap result;
    
    // 转换 dynamic_obstacles 数组
    std::vector<std::any> dynamic_obstacles;
    for (const auto& obstacle : msg.dynamic_obstacles) {
        MessageMap obstacle_map = rv_dyn_obstacle_to_map(obstacle);
        dynamic_obstacles.push_back(std::any(obstacle_map));
    }
    result["dynamic_obstacles"] = std::any(dynamic_obstacles);
    
    // 转换 source (uint8)
    result["source"] = std::any(static_cast<uint8_t>(msg.source));
    
    return result;
}

// 辅助函数：转换 RVDynObstacle
MessageMap rv_dyn_obstacle_to_map(const deva_perception_msgs::msg::RVDynObstacle& msg) {
    MessageMap result;
    
    // 注意：这里只转换基本类型和简单嵌套类型
    // 对于复杂的嵌套消息类型（如 ObstacleCommon, BoundingBox2d 等），
    // 可以进一步展开，但为了简化，这里先转换基本字段
    
    // 基本类型字段
    result["dynamic_obstacle_type"] = std::any(static_cast<uint8_t>(msg.dynamic_obstacle_type));
    result["det_score"] = std::any(static_cast<float>(msg.det_score));
    result["full_occ_score"] = std::any(static_cast<float>(msg.full_occ_score));
    result["head_occ_score"] = std::any(static_cast<float>(msg.head_occ_score));
    result["tail_occ_score"] = std::any(static_cast<float>(msg.tail_occ_score));
    result["full_trunc_score"] = std::any(static_cast<float>(msg.full_trunc_score));
    result["head_trunc_score"] = std::any(static_cast<float>(msg.head_trunc_score));
    result["tail_trunc_score"] = std::any(static_cast<float>(msg.tail_trunc_score));
    result["subclass_score"] = std::any(static_cast<float>(msg.subclass_score));
    result["light_valid"] = std::any(static_cast<bool>(msg.light_valid));
    result["turn_type"] = std::any(static_cast<uint8_t>(msg.turn_type));
    result["turn_score"] = std::any(static_cast<float>(msg.turn_score));
    result["brake_type"] = std::any(static_cast<uint8_t>(msg.brake_type));
    result["brake_score"] = std::any(static_cast<float>(msg.brake_score));
    result["hazard_type"] = std::any(static_cast<uint8_t>(msg.hazard_type));
    result["hazard_score"] = std::any(static_cast<float>(msg.hazard_score));
    
    // 对于嵌套的消息类型，可以添加占位符或进一步展开
    // 例如：obstacle, bbox, head_bbox, tail_bbox, ground_points, ped_bbox, subclassification_type, extra_infos
    // 这里为了演示，添加一些标记
    MessageMap obstacle_placeholder;
    obstacle_placeholder["_type"] = std::any(std::string("ObstacleCommon"));
    result["obstacle"] = std::any(obstacle_placeholder);
    
    MessageMap bbox_placeholder;
    bbox_placeholder["_type"] = std::any(std::string("BoundingBox2d"));
    result["bbox"] = std::any(bbox_placeholder);
    result["head_bbox"] = std::any(bbox_placeholder);
    result["tail_bbox"] = std::any(bbox_placeholder);
    result["ped_bbox"] = std::any(bbox_placeholder);
    
    // ground_points 数组
    std::vector<std::any> ground_points;
    for ([[maybe_unused]] const auto& point : msg.ground_points) {
        MessageMap point_placeholder;
        point_placeholder["_type"] = std::any(std::string("GroundPoint"));
        ground_points.push_back(std::any(point_placeholder));
    }
    result["ground_points"] = std::any(ground_points);
    
    // subclassification_type
    MessageMap subclass_placeholder;
    subclass_placeholder["_type"] = std::any(std::string("SubclassificationType"));
    result["subclassification_type"] = std::any(subclass_placeholder);
    
    // extra_infos 数组
    std::vector<std::any> extra_infos;
    for ([[maybe_unused]] const auto& info : msg.extra_infos) {
        MessageMap info_placeholder;
        info_placeholder["_type"] = std::any(std::string("ExtraInfo"));
        extra_infos.push_back(std::any(info_placeholder));
    }
    result["extra_infos"] = std::any(extra_infos);
    
    return result;
}

// 辅助函数：将any值转换为字符串用于打印
std::string any_to_string(const std::any& value) {
    if (value.type() == typeid(int8_t)) {
        return std::to_string(std::any_cast<int8_t>(value));
    } else if (value.type() == typeid(int16_t)) {
        return std::to_string(std::any_cast<int16_t>(value));
    } else if (value.type() == typeid(int32_t)) {
        return std::to_string(std::any_cast<int32_t>(value));
    } else if (value.type() == typeid(int64_t)) {
        return std::to_string(std::any_cast<int64_t>(value));
    } else if (value.type() == typeid(uint8_t)) {
        return std::to_string(std::any_cast<uint8_t>(value));
    } else if (value.type() == typeid(uint16_t)) {
        return std::to_string(std::any_cast<uint16_t>(value));
    } else if (value.type() == typeid(uint32_t)) {
        return std::to_string(std::any_cast<uint32_t>(value));
    } else if (value.type() == typeid(uint64_t)) {
        return std::to_string(std::any_cast<uint64_t>(value));
    } else if (value.type() == typeid(float)) {
        return std::to_string(std::any_cast<float>(value));
    } else if (value.type() == typeid(double)) {
        return std::to_string(std::any_cast<double>(value));
    } else if (value.type() == typeid(bool)) {
        return std::any_cast<bool>(value) ? "true" : "false";
    } else if (value.type() == typeid(std::string)) {
        return std::any_cast<std::string>(value);
    } else if (value.type() == typeid(MessageMap)) {
        return "(MessageMap)";
    } else if (value.type() == typeid(std::vector<std::any>)) {
        const auto& vec = std::any_cast<const std::vector<std::any>&>(value);
        return "(array, size=" + std::to_string(vec.size()) + ")";
    } else {
        return "(unknown type)";
    }
}

// 辅助函数：生成层级前缀字符串
std::string get_level_prefix(int depth, bool is_last, bool is_array_item = false) {
    std::string prefix;
    if (depth == 0) {
        return "";
    }
    
    // 使用树状结构符号
    if (is_array_item) {
        prefix = "├─ ";
    } else if (is_last) {
        prefix = "└─ ";
    } else {
        prefix = "├─ ";
    }
    
    return prefix;
}

// 辅助函数：生成缩进字符串（考虑层级）
std::string get_indent_string(int depth, bool is_last, bool is_array_item = false) {
    std::string indent;
    if (depth == 0) {
        return "";
    }
    
    // 为每个层级添加适当的缩进
    for (int i = 0; i < depth - 1; ++i) {
        indent += "│  ";
    }
    
    if (depth > 0) {
        if (is_last && !is_array_item) {
            indent += "   ";  // 最后一项，不需要竖线
        } else {
            indent += "│  ";  // 非最后一项，需要竖线
        }
    }
    
    return indent;
}

// 辅助函数：打印嵌套map（用于调试）
void print_message_map(
    const MessageMap& msg_map, 
    const std::string& /* indent */,
    int depth,
    int max_depth,
    bool show_all_array_items) 
{
    // 检查最大深度限制
    if (max_depth > 0 && depth >= max_depth) {
        std::string current_indent = get_indent_string(depth, true, false);
        std::cout << current_indent << "└─ ... (max depth " << max_depth << " reached)" << std::endl;
        return;
    }
    
    // 计算总元素数，用于判断是否是最后一项
    size_t total_items = msg_map.size();
    size_t current_index = 0;
    
    for (const auto& pair : msg_map) {
        current_index++;
        bool is_last = (current_index == total_items);
        
        // 生成层级标识
        std::string level_marker = "[L" + std::to_string(depth) + "]";
        std::string current_indent = get_indent_string(depth, is_last, false);
        std::string prefix = get_level_prefix(depth, is_last, false);
        
        // 输出键名和层级标识
        std::cout << current_indent << prefix << level_marker << " " << pair.first << ": ";
        
        const std::any& value = pair.second;
        
        // 检查是否是嵌套的MessageMap
        if (value.type() == typeid(MessageMap)) {
            std::cout << "(Map)" << std::endl;
            const MessageMap& nested_map = std::any_cast<const MessageMap&>(value);
            // 递归打印嵌套map，深度+1
            print_message_map(nested_map, "", depth + 1, max_depth, show_all_array_items);
        }
        // 检查是否是数组
        else if (value.type() == typeid(std::vector<std::any>)) {
            const std::vector<std::any>& vec = std::any_cast<const std::vector<std::any>&>(value);
            std::cout << "[Array, size=" << vec.size() << "]" << std::endl;
            
            // 决定显示多少个元素
            size_t display_count = show_all_array_items ? vec.size() : std::min(vec.size(), size_t(3));
            
            for (size_t i = 0; i < display_count; ++i) {
                bool is_array_last = (i == display_count - 1) && 
                                     (show_all_array_items || vec.size() <= 3);
                bool is_final_last = is_array_last && is_last;
                
                std::string array_indent = get_indent_string(depth + 1, is_final_last, true);
                std::string array_prefix = get_level_prefix(depth + 1, is_final_last, true);
                std::string array_level = "[L" + std::to_string(depth + 1) + "]";
                
                std::cout << array_indent << array_prefix << array_level << " [" << i << "]: ";
                
                const std::any& item = vec[i];
                if (item.type() == typeid(MessageMap)) {
                    std::cout << "(Map)" << std::endl;
                    const MessageMap& item_map = std::any_cast<const MessageMap&>(item);
                    // 递归打印数组中的map，深度+2（因为数组本身占一层）
                    print_message_map(item_map, "", depth + 2, max_depth, show_all_array_items);
                } else {
                    // 基本类型，直接输出值（最底层）
                    std::cout << any_to_string(item) << " (leaf)" << std::endl;
                }
            }
            
            // 如果数组元素太多，显示省略信息
            if (!show_all_array_items && vec.size() > 3) {
                std::string array_indent = get_indent_string(depth + 1, is_last, true);
                std::cout << array_indent << "└─ ... (" << (vec.size() - 3) << " more items)" << std::endl;
            }
        }
        // 基本类型（最底层）
        else {
            std::cout << any_to_string(value) << " (leaf)" << std::endl;
        }
    }
}

// 辅助函数：将any值转换为YAML格式字符串
std::string any_to_yaml_string(const std::any& value) {
    if (value.type() == typeid(int8_t)) {
        return std::to_string(std::any_cast<int8_t>(value));
    } else if (value.type() == typeid(int16_t)) {
        return std::to_string(std::any_cast<int16_t>(value));
    } else if (value.type() == typeid(int32_t)) {
        return std::to_string(std::any_cast<int32_t>(value));
    } else if (value.type() == typeid(int64_t)) {
        return std::to_string(std::any_cast<int64_t>(value));
    } else if (value.type() == typeid(uint8_t)) {
        return std::to_string(std::any_cast<uint8_t>(value));
    } else if (value.type() == typeid(uint16_t)) {
        return std::to_string(std::any_cast<uint16_t>(value));
    } else if (value.type() == typeid(uint32_t)) {
        return std::to_string(std::any_cast<uint32_t>(value));
    } else if (value.type() == typeid(uint64_t)) {
        return std::to_string(std::any_cast<uint64_t>(value));
    } else if (value.type() == typeid(float)) {
        float f = std::any_cast<float>(value);
        // 如果是整数，显示为整数格式
        if (f == static_cast<int>(f)) {
            return std::to_string(static_cast<int>(f)) + ".0";
        }
        return std::to_string(f);
    } else if (value.type() == typeid(double)) {
        double d = std::any_cast<double>(value);
        // 如果是整数，显示为整数格式
        if (d == static_cast<int>(d)) {
            return std::to_string(static_cast<int>(d)) + ".0";
        }
        return std::to_string(d);
    } else if (value.type() == typeid(bool)) {
        return std::any_cast<bool>(value) ? "true" : "false";
    } else if (value.type() == typeid(std::string)) {
        std::string str = std::any_cast<std::string>(value);
        // 如果字符串为空，返回空字符串（会被显示为 ''）
        if (str.empty()) {
            return "''";
        }
        return str;
    } else if (value.type() == typeid(MessageMap)) {
        return "(Map)";  // 不应该到达这里，因为会在调用处处理
    } else if (value.type() == typeid(std::vector<std::any>)) {
        return "(Array)";  // 不应该到达这里，因为会在调用处处理
    } else {
        return "(unknown type)";
    }
}

// YAML格式打印函数
void print_message_map_yaml(
    const MessageMap& msg_map,
    const std::string& indent,
    bool is_array_item,
    int max_depth,
    int current_depth)
{
    // 检查最大深度限制
    if (max_depth > 0 && current_depth >= max_depth) {
        std::cout << indent << "... (max depth " << max_depth << " reached)" << std::endl;
        return;
    }
    
    // 计算总元素数
    size_t current_index = 0;
    
    for (const auto& pair : msg_map) {
        current_index++;
        
        // 确定当前行的缩进和前缀
        std::string current_indent = indent;
        std::string key_prefix = "";
        
        if (is_array_item) {
            // 数组中的map项，第一行使用 `- ` 前缀
            if (current_index == 1) {
                // 计算基础缩进（去掉最后2个空格，加上 `- `）
                if (indent.length() >= 2) {
                    current_indent = indent.substr(0, indent.length() - 2);
                }
                key_prefix = "- ";
            } else {
                // 后续行使用正常缩进
                if (indent.length() >= 2) {
                    current_indent = indent.substr(0, indent.length() - 2);
                }
            }
        }
        
        // 输出键名
        std::cout << current_indent << key_prefix << pair.first << ": ";
        
        const std::any& value = pair.second;
        
        // 检查是否是嵌套的MessageMap
        if (value.type() == typeid(MessageMap)) {
            std::cout << std::endl;
            const MessageMap& nested_map = std::any_cast<const MessageMap&>(value);
            // 递归打印嵌套map，深度+1，缩进增加2个空格
            std::string next_indent;
            if (is_array_item) {
                // 如果是数组项，下一级缩进需要对齐
                if (indent.length() >= 2) {
                    next_indent = indent.substr(0, indent.length() - 2) + "  ";
                } else {
                    next_indent = indent + "  ";
                }
            } else {
                next_indent = indent + "  ";
            }
            print_message_map_yaml(nested_map, next_indent, false, max_depth, current_depth + 1);
        }
        // 检查是否是数组
        else if (value.type() == typeid(std::vector<std::any>)) {
            const std::vector<std::any>& vec = std::any_cast<const std::vector<std::any>&>(value);
            
            if (vec.empty()) {
                // 空数组
                std::cout << "[]" << std::endl;
            } else {
                std::cout << std::endl;
                // 打印数组元素
                for (size_t i = 0; i < vec.size(); ++i) {
                    const std::any& item = vec[i];
                    
                    if (item.type() == typeid(MessageMap)) {
                        // 数组中的map元素
                        const MessageMap& item_map = std::any_cast<const MessageMap&>(item);
                        // 数组中的map，缩进需要特殊处理
                        std::string array_indent;
                        if (is_array_item) {
                            if (indent.length() >= 2) {
                                array_indent = indent.substr(0, indent.length() - 2) + "  ";
                            } else {
                                array_indent = indent + "  ";
                            }
                        } else {
                            array_indent = indent + "  ";
                        }
                        print_message_map_yaml(item_map, array_indent, true, max_depth, current_depth + 1);
                    } else {
                        // 数组中的基本类型元素
                        std::string array_indent;
                        if (is_array_item) {
                            if (indent.length() >= 2) {
                                array_indent = indent.substr(0, indent.length() - 2) + "  - ";
                            } else {
                                array_indent = indent + "  - ";
                            }
                        } else {
                            array_indent = indent + "  - ";
                        }
                        std::cout << array_indent << any_to_yaml_string(item) << std::endl;
                    }
                }
            }
        }
        // 基本类型（最底层）
        else {
            std::cout << any_to_yaml_string(value) << std::endl;
        }
    }
}

}  // namespace mcap_streamer


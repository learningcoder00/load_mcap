#!/bin/bash

# MCAP Streamer 启动脚本
# 此脚本会同时启动发布节点和订阅节点

set -e

# 获取脚本所在目录
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# 颜色输出
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

echo -e "${BLUE}========================================${NC}"
echo -e "${BLUE}MCAP Streamer 启动脚本${NC}"
echo -e "${BLUE}========================================${NC}"
echo ""

# 检查ROS2环境
if [ -z "$ROS_DISTRO" ]; then
    echo -e "${YELLOW}警告: ROS2环境未source，尝试source默认环境...${NC}"
    if [ -f "/opt/ros/humble/setup.bash" ]; then
        source /opt/ros/humble/setup.bash
        echo -e "${GREEN}已source ROS2 Humble环境${NC}"
    else
        echo -e "${YELLOW}错误: 未找到ROS2环境，请先source ROS2环境${NC}"
        echo "例如: source /opt/ros/humble/setup.bash"
        exit 1
    fi
fi

# Source当前workspace
if [ -f "install/setup.bash" ]; then
    source install/setup.bash
    echo -e "${GREEN}已source当前workspace${NC}"
else
    echo -e "${YELLOW}警告: 未找到install/setup.bash，请先构建workspace${NC}"
    echo "运行: colcon build --packages-select mcap_streamer"
    exit 1
fi

echo ""
echo -e "${BLUE}启动节点...${NC}"
echo ""

# 使用launch文件同时启动两个节点
ros2 launch mcap_streamer mcap_streamer_with_reader.launch.py


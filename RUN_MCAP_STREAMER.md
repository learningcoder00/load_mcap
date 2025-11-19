# 如何运行 mcap_streamer_node 节点

## 前置条件

1. **编译工作空间**：
   ```bash
   cd /home/linjiawei/load_mcap
   source /opt/ros/humble/setup.bash
   colcon build --packages-select mcap_streamer
   source install/setup.bash
   ```

2. **确保所有消息包已编译**（如果之前没有编译）：
   ```bash
   colcon build
   source install/setup.bash
   ```

## 运行方法

### 方法 1: 使用 Launch 文件（推荐）

使用默认配置文件：
```bash
cd /home/linjiawei/load_mcap
source /opt/ros/humble/setup.bash
source install/setup.bash
ros2 launch mcap_streamer mcap_streamer.launch.py
```

使用自定义配置文件：
```bash
ros2 launch mcap_streamer mcap_streamer.launch.py \
  config_file:=/path/to/your/config.yaml
```

### 方法 2: 使用 ros2 run 命令

直接运行节点：
```bash
cd /home/linjiawei/load_mcap
source /opt/ros/humble/setup.bash
source install/setup.bash
ros2 run mcap_streamer mcap_streamer_node \
  --ros-args \
  --params-file src/mcap_streamer/config/mcap_streamer_params.yaml
```

### 方法 3: 使用启动脚本

```bash
cd /home/linjiawei/load_mcap
./run_mcap_streamer.sh
```

### 方法 4: 命令行参数（不使用配置文件）

```bash
ros2 run mcap_streamer mcap_streamer_node \
  --ros-args \
  -p s3_url:="s3://your-bucket/path/to/file.mcap" \
  -p local_cache_path:="/tmp/mcap_cache" \
  -p aws_access_key_id:="your_access_key" \
  -p aws_secret_access_key:="your_secret_key" \
  -p aws_region:="us-east-1" \
  -p endpoint_url:="http://oss.i.machdrive.cn" \
  -p playback_rate:=1.0 \
  -p loop:=false \
  -p storage_id:="mcap"
```

## 配置文件说明

配置文件位于：`src/mcap_streamer/config/mcap_streamer_params.yaml`

主要参数：
- `s3_url`: S3文件URL（必需）
- `local_cache_path`: 本地缓存路径（默认：/tmp/mcap_cache）
- `aws_access_key_id`: AWS访问密钥ID
- `aws_secret_access_key`: AWS密钥
- `aws_region`: AWS区域（默认：us-east-1）
- `endpoint_url`: 自定义端点URL（可选，如：http://oss.i.machdrive.cn）
- `playback_rate`: 播放速率（默认：1.0，1.0表示实时播放）
- `loop`: 是否循环播放（默认：false）
- `storage_id`: 存储ID（默认：mcap）
- `topics`: 要发布的topic列表（可选，如果为空则发布所有topic）

## 过滤特定 Topic

如果只想发布特定的 topic，可以在配置文件中添加：

```yaml
topics:
  - "/perception/fusion/version"
  - "/camera/front/image_raw"
  - "/sensor/front_warp_rslidar_points"
```

或者在命令行中指定：

```bash
ros2 run mcap_streamer mcap_streamer_node \
  --ros-args \
  --params-file src/mcap_streamer/config/mcap_streamer_params.yaml \
  -p topics:="['/perception/fusion/version', '/camera/front/image_raw']"
```

## 验证运行

运行后，节点会：
1. 从S3下载MCAP文件（如果本地不存在）
2. 读取MCAP文件中的所有topic
3. 尝试为每个topic创建发布者
4. 生成以下JSON文件：
   - `available_topics.json`: 可以创建发布者的topic列表
   - `unavailable_topics.json`: 无法创建发布者的topic列表
   - `missing_msg_packages.json`: 缺少的消息包汇总
5. 开始播放消息

## 查看发布的 Topic

在另一个终端中运行：
```bash
source /opt/ros/humble/setup.bash
source /home/linjiawei/load_mcap/install/setup.bash
ros2 topic list
ros2 topic echo /your/topic/name
```

## 常见问题

1. **找不到消息类型**：
   - 确保所有消息包已编译：`colcon build`
   - 确保已 source 环境：`source install/setup.bash`

2. **S3下载失败**：
   - 检查网络连接
   - 验证 AWS 凭证是否正确
   - 检查 endpoint_url 是否正确

3. **没有发布任何消息**：
   - 检查 `available_topics.json` 查看哪些topic可用
   - 检查 `unavailable_topics.json` 查看错误信息


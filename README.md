# MCAP Streamer

一个ROS2包，包含两个节点：
1. **mcap_streamer_node**: 从远程S3存储桶读取MCAP文件，并将其中的消息发布为ROS2话题
2. **mcap_reader_node**: 订阅ROS2话题，并将消息保存为MCAP文件或JSON文件

## 功能特性

### mcap_streamer_node（发布节点）
- 从Amazon S3或兼容S3 API的对象存储服务下载MCAP文件
- **智能缓存检查**：自动检查本地缓存，如果文件已存在则跳过下载
- 支持S3 URL格式 (`s3://bucket-name/path/to/file.mcap`) 和HTTP URL格式
- 支持自定义端点URL（用于兼容S3 API的对象存储服务，如OSS）
- 使用AWS CLI下载文件（支持认证和自定义端点）
- 使用rosbag2读取MCAP文件
- 自动为MCAP文件中的所有话题创建发布者
- 支持可配置的播放速率
- 支持循环播放

### mcap_reader_node（订阅和记录节点）
- 自动发现并订阅所有可用的话题
- 将订阅的消息保存为MCAP格式（可完整回放）
- 可选保存为JSON格式（便于查看和分析）
- 支持同时保存两种格式
- 可配置输出路径和文件名
- 支持消息数量和时间限制
- 生成详细的元数据文件

## 依赖

- ROS2 (Humble/Iron/Jazzy)
- rosbag2_cpp
- rosbag2_storage
- AWS CLI (用于从S3下载文件，推荐)
- curl (可选，用于下载公开的HTTP文件)

### MCAP格式支持

MCAP格式支持通过rosbag2的插件系统提供。**必须安装MCAP存储插件才能读取MCAP文件**。

#### 安装MCAP插件

根据您的ROS2发行版安装相应的插件：

```bash
# 对于Humble
sudo apt-get install ros-humble-rosbag2-storage-mcap

# 对于Iron
sudo apt-get install ros-iron-rosbag2-storage-mcap

# 对于Jazzy
sudo apt-get install ros-jazzy-rosbag2-storage-mcap
```

安装后，rosbag2会自动加载MCAP插件，节点即可正常读取MCAP文件。

## 构建

```bash
cd /home/linjiawei/load_mcap
colcon build --packages-select mcap_streamer
source install/setup.bash
```

## 使用方法

### 方法1: 使用YAML配置文件（推荐）

这是最推荐的方式，可以方便地管理配置参数。

#### 1. 编辑配置文件

编辑 `src/mcap_streamer/config/mcap_streamer_params.yaml` 文件，设置您需要的参数：

```yaml
/**:
  ros__parameters:
    # S3文件URL（必需）
    s3_url: "s3://your-bucket/path/to/file.mcap"
    
    # 本地缓存路径（可选，默认: /tmp/mcap_cache）
    # 下载的mcap文件将保存在此目录
    local_cache_path: "/home/user/mcap_files"
    
    # 自定义端点URL（可选）
    endpoint_url: "http://oss.i.machdrive.cn"
    
    # 播放速率（可选，默认: 1.0）
    playback_rate: 1.0
    
    # 是否循环播放（可选，默认: false）
    loop: false
```

#### 2. 使用YAML文件运行节点

**方式A: 直接指定YAML文件**

```bash
ros2 run mcap_streamer mcap_streamer_node \
  --ros-args \
  --params-file src/mcap_streamer/config/mcap_streamer_params.yaml
```

**方式B: 使用Launch文件（推荐）**

```bash
ros2 launch mcap_streamer mcap_streamer.launch.py
```

或者指定自定义配置文件：

```bash
ros2 launch mcap_streamer mcap_streamer.launch.py \
  config_file:=/path/to/your/config.yaml
```

### 使用mcap_reader_node（订阅和记录节点）

`mcap_reader_node` 用于订阅ROS2话题并将消息保存为文件。

#### 1. 编辑配置文件

编辑 `src/mcap_streamer/config/mcap_reader_params.yaml` 文件：

```yaml
/**:
  ros__parameters:
    # 输出路径（从主配置文件读取或单独指定）
    mcap_reader_path: "/data/output/mcap_reader"
    
    # 输出格式: "mcap" (MCAP格式), "json" (JSON格式), "both" (两种格式都保存)
    output_format: "mcap"
    
    # 输出文件名（可选，如果为空则使用时间戳）
    output_filename: ""
    
    # 是否打印收到的消息（用于调试）
    print_messages: false
    
    # 最大记录持续时间（秒，0表示无限制）
    max_duration: 0.0
    
    # 每个话题的最大消息数量（0表示无限制）
    max_messages_per_topic: 0
```

#### 2. 运行节点

**方式A: 使用Launch文件**

```bash
ros2 launch mcap_streamer mcap_reader.launch.py
```

**方式B: 直接运行**

```bash
ros2 run mcap_streamer mcap_reader_node \
  --ros-args \
  --params-file src/mcap_streamer/config/mcap_reader_params.yaml
```

#### 3. 输出文件

- **MCAP格式**: `{output_path}/{filename}.mcap` - 完整的MCAP文件，可以用rosbag2回放
- **JSON格式**: 
  - `{output_path}/{filename}_metadata.json` - 元数据（话题列表、消息数量等）
  - `{output_path}/{filename}_messages.jsonl` - 消息数据（JSONL格式，每行一个JSON对象）

#### 4. 完整工作流程示例

**方法A: 使用一键启动脚本（推荐）**

```bash
# 在项目根目录下运行
./run_mcap_streamer.sh
```

这个脚本会：
1. 自动检查并source ROS2环境
2. 自动source当前workspace
3. 先启动订阅节点（`mcap_reader_node`）
4. 延迟2秒后启动发布节点（`mcap_streamer_node`），确保订阅节点已准备好

**方法B: 使用launch文件**

```bash
# 使用组合launch文件同时启动两个节点
ros2 launch mcap_streamer mcap_streamer_with_reader.launch.py
```

**方法C: 分别启动（两个终端）**

```bash
# 终端1: 启动发布节点（从S3下载并发布MCAP文件中的消息）
ros2 launch mcap_streamer mcap_streamer.launch.py

# 终端2: 启动订阅节点（订阅话题并保存为文件）
ros2 launch mcap_streamer mcap_reader.launch.py
```

### 方法2: 命令行参数

### 基本用法

```bash
ros2 run mcap_streamer mcap_streamer_node \
  --ros-args \
  -p s3_url:="s3://my-bucket/path/to/file.mcap"
```

### 完整参数示例（标准AWS S3）

```bash
ros2 run mcap_streamer mcap_streamer_node \
  --ros-args \
  -p s3_url:="s3://my-bucket/path/to/file.mcap" \
  -p local_cache_path:="/tmp/mcap_cache" \
  -p aws_access_key_id:="YOUR_ACCESS_KEY" \
  -p aws_secret_access_key:="YOUR_SECRET_KEY" \
  -p aws_region:="us-east-1" \
  -p playback_rate:=1.0 \
  -p loop:=false \
  -p storage_id:="mcap"
```

### 使用自定义端点（兼容S3 API的对象存储）

如果您使用的是兼容S3 API的对象存储服务（如OSS），可以通过 `endpoint_url` 参数指定自定义端点：

```bash
ros2 run mcap_streamer mcap_streamer_node \
  --ros-args \
  -p s3_url:="s3://my-bucket/path/to/file.mcap" \
  -p endpoint_url:="http://oss.i.machdrive.cn" \
  -p local_cache_path:="/tmp/mcap_cache" \
  -p playback_rate:=1.0
```

**注意**: 使用自定义端点时，AWS凭证可以通过以下方式配置：
- AWS CLI配置文件 `~/.aws/credentials`
- 环境变量 `AWS_ACCESS_KEY_ID` 和 `AWS_SECRET_ACCESS_KEY`
- 或者通过参数传递（不推荐，因为会暴露在命令行中）

### 参数说明

- `s3_url` (必需): S3文件的URL，支持格式：
  - `s3://bucket-name/path/to/file.mcap`
  - `https://bucket-name.s3.region.amazonaws.com/path/to/file.mcap`
- `endpoint_url` (可选): 自定义端点URL，用于兼容S3 API的对象存储服务（如: `http://oss.i.machdrive.cn`）
- `local_cache_path` (可选，默认: `/tmp/mcap_cache`): 本地缓存目录
  - **智能缓存**：如果该目录中已存在同名文件且大小>0，将自动跳过下载，直接使用本地文件
  - 这可以节省下载时间，特别是对于大文件
- `aws_access_key_id` (可选): AWS访问密钥ID，如果为空则尝试使用环境变量或IAM角色
- `aws_secret_access_key` (可选): AWS秘密访问密钥，如果为空则尝试使用环境变量或IAM角色
- `aws_region` (可选，默认: `us-east-1`): AWS区域
- `playback_rate` (可选，默认: `1.0`): 播放速率（1.0为正常速度，2.0为2倍速）
- `loop` (可选，默认: `false`): 是否循环播放
- `storage_id` (可选，默认: `mcap`): 存储格式ID

### 配置文件示例

完整的配置文件示例 (`config/mcap_streamer_params.yaml`):

```yaml
/**:
  ros__parameters:
    # ========== 必需参数 ==========
    # S3文件URL
    s3_url: "s3://your-bucket/path/to/file.mcap"
    
    # ========== 文件路径配置 ==========
    # 本地缓存路径 - 下载的mcap文件将保存在此目录
    # 如果本地文件已存在且大小>0，将自动跳过下载，直接使用本地文件
    local_cache_path: "/home/user/mcap_files"
    
    # ========== S3/OSS配置 ==========
    # 自定义端点URL（用于兼容S3 API的对象存储服务）
    endpoint_url: "http://oss.i.machdrive.cn"
    
    # AWS访问凭证（可选，如果为空则使用环境变量或IAM角色）
    aws_access_key_id: ""
    aws_secret_access_key: ""
    aws_region: "us-east-1"
    
    # ========== 播放配置 ==========
    # 播放速率（1.0为正常速度，2.0为2倍速，0.5为0.5倍速）
    playback_rate: 1.0
    
    # 是否循环播放
    loop: false
    
    # 存储格式ID
    storage_id: "mcap"
```

**重要提示**:
- `s3_url`: 指定要下载的MCAP文件路径
- `local_cache_path`: 指定下载文件的本地保存位置
- 其他参数都有默认值，可以根据需要修改

## 注意事项

1. **S3访问权限**: 如果S3文件是私有的，需要提供有效的AWS凭证。可以通过以下方式：
   - 使用AWS CLI配置文件 `~/.aws/credentials`（推荐）
   - 设置环境变量 `AWS_ACCESS_KEY_ID` 和 `AWS_SECRET_ACCESS_KEY`
   - 使用IAM角色（如果在EC2实例上运行）
   - 通过参数传递 `aws_access_key_id` 和 `aws_secret_access_key`（不推荐，会暴露在命令行中）

2. **下载方式**: 
   - 对于 `s3://` 格式的URL，节点会优先使用 `aws s3 cp` 命令下载（支持认证和自定义端点）
   - 对于HTTP/HTTPS URL，会使用curl下载（仅适用于公开文件）
   - 确保已安装并配置AWS CLI

3. **自定义端点配置**: 如果使用自定义端点（如OSS），建议配置AWS CLI别名：
   ```bash
   echo 'alias oss="aws --endpoint-url=http://oss.i.machdrive.cn s3"' >> ~/.bashrc
   source ~/.bashrc
   ```
   然后节点会自动使用配置的端点。

4. **MCAP格式**: 确保MCAP文件是有效的ROS2 bag文件格式。

5. **话题发布**: 节点会自动为MCAP文件中的所有话题创建发布者，话题名称和类型与原始记录保持一致。

## 故障排除

### 下载问题
- 如果下载失败，检查S3 URL是否正确，以及是否有访问权限
- 确保AWS CLI已正确配置（凭证、端点等）

### MCAP格式支持
- 如果无法读取MCAP文件，确保系统支持MCAP格式（rosbag2会自动加载可用的存储插件）
- 如果MCAP格式不支持，需要安装相应的rosbag2存储插件：
  ```bash
  sudo apt-get install ros-humble-rosbag2-storage-mcap
  ```

### 消息类型包缺失
- 如果某些话题的消息类型包不存在（如 `deva_common_msgs`），节点会：
  - 记录警告信息并跳过这些话题
  - 继续为其他话题创建发布者
  - 只要至少有一个发布者创建成功，就可以播放消息
- 如果需要发布所有话题，请确保安装了相应的消息类型包

#### 安装消息类型包

运行安装脚本：
```bash
cd /home/linjiawei/load_mcap
./install_message_packages.sh
```

该脚本会：
1. 安装标准ROS2消息包（sensor_msgs, std_msgs等）
2. 安装第三方消息包（foxglove_msgs等）
3. 检查自定义消息包（deva_*系列）

#### 自定义消息包（deva_*系列）

`deva_*` 系列消息包通常不在标准ROS2仓库中，需要：

**查找这些包的位置：**
```bash
cd /home/linjiawei/load_mcap
./find_deva_packages.sh
```

**如果找到了workspace：**
```bash
# 先source包含deva消息包的workspace
source /path/to/your/workspace/install/setup.bash

# 然后source当前workspace
source /home/linjiawei/load_mcap/install/setup.bash

# 运行节点
ros2 launch mcap_streamer mcap_streamer.launch.py
```

**如果没有找到，需要从源代码构建：**
1. 获取这些包的源代码（通常从Git仓库）
2. 在workspace中构建：
   ```bash
   cd /path/to/your/workspace
   colcon build --packages-select deva_common_msgs deva_control_msgs ...
   source install/setup.bash
   ```
3. 然后按照上面的方式source并运行节点

**注意：** 即使没有这些消息包，节点也能正常工作，只是会跳过使用这些消息类型的话题。其他话题（如 `sensor_msgs/PointCloud2`）仍可正常发布。

- 查看日志输出以了解哪些话题成功创建了发布者，哪些被跳过了

### 其他问题
- 查看日志输出以获取详细的错误信息
- 确保ROS2环境已正确source：`source /opt/ros/humble/setup.bash`


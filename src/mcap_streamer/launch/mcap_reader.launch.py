from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    # 获取包共享目录
    pkg_share = get_package_share_directory('mcap_streamer')
    
    # 声明launch参数
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=os.path.join(pkg_share, 'config', 'mcap_reader_params.yaml'),
        description='Path to the YAML configuration file'
    )
    
    # 创建节点
    mcap_reader_node = Node(
        package='mcap_streamer',
        executable='mcap_reader_node',
        name='mcap_reader',
        parameters=[LaunchConfiguration('config_file')],
        output='screen'
    )
    
    return LaunchDescription([
        config_file_arg,
        mcap_reader_node,
    ])


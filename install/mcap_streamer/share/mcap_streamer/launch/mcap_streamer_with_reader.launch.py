from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, TimerAction
from launch.substitutions import LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    # 获取包共享目录
    pkg_share = get_package_share_directory('mcap_streamer')
    
    # 声明launch参数
    streamer_config_arg = DeclareLaunchArgument(
        'streamer_config_file',
        default_value=os.path.join(pkg_share, 'config', 'mcap_streamer_params.yaml'),
        description='Path to the streamer YAML configuration file'
    )
    
    reader_config_arg = DeclareLaunchArgument(
        'reader_config_file',
        default_value=os.path.join(pkg_share, 'config', 'mcap_reader_params.yaml'),
        description='Path to the reader YAML configuration file'
    )
    
    # 创建订阅节点（先启动，等待话题出现）
    mcap_reader_node = Node(
        package='mcap_streamer',
        executable='mcap_reader_node',
        name='mcap_reader',
        parameters=[LaunchConfiguration('reader_config_file')],
        output='screen'
    )
    
    # 创建发布节点（延迟2秒启动，确保订阅节点已准备好）
    mcap_streamer_node = TimerAction(
        period=2.0,
        actions=[
            Node(
                package='mcap_streamer',
                executable='mcap_streamer_node',
                name='mcap_streamer',
                parameters=[LaunchConfiguration('streamer_config_file')],
                output='screen'
            )
        ]
    )
    
    return LaunchDescription([
        streamer_config_arg,
        reader_config_arg,
        mcap_reader_node,  # 先启动订阅节点
        mcap_streamer_node,  # 延迟启动发布节点
    ])


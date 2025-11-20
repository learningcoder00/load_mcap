cmake_minimum_required(VERSION 3.8)
project(mcap_streamer)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosbag2_cpp REQUIRED)
find_package(rosbag2_storage REQUIRED)
find_package(rcl_interfaces REQUIRED)
find_package(rosidl_typesupport_introspection_cpp REQUIRED)
# Message packages used by mcap_example
find_package(deva_perception_msgs REQUIRED)
find_package(deva_control_msgs REQUIRED)
find_package(deva_common_msgs REQUIRED)
find_package(deva_localization_msgs REQUIRED)
find_package(deva_aeb_msgs REQUIRED)
find_package(deva_map_msgs REQUIRED)
find_package(deva_mdriver_msgs REQUIRED)
find_package(deva_gaode_routing_msgs REQUIRED)
find_package(deva_navi_msgs REQUIRED)
find_package(deva_ads_msgs REQUIRED)
find_package(deva_planning_msgs REQUIRED)
find_package(deva_planning_msgs2 REQUIRED)
find_package(deva_function_msgs REQUIRED)
find_package(rviz_plug_msg REQUIRED)
find_package(fault_diagnosis REQUIRED)
find_package(serialize_msgs REQUIRED)
find_package(environment_model_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(foxglove_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# Add library for S3 downloader
add_library(s3_downloader_lib src/s3_downloader.cpp)
target_include_directories(s3_downloader_lib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
ament_target_dependencies(s3_downloader_lib
  rclcpp
)

# Add library for ROS message converter
add_library(ros_message_converter_lib src/ros_message_converter.cpp)
target_include_directories(ros_message_converter_lib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
ament_target_dependencies(ros_message_converter_lib
  rclcpp
  deva_perception_msgs
)

# Add executable for streamer
add_executable(mcap_streamer_node src/mcap_streamer_node.cpp)
target_link_libraries(mcap_streamer_node s3_downloader_lib)
ament_target_dependencies(mcap_streamer_node
  rclcpp
  std_msgs
  rosbag2_cpp
  rosbag2_storage
  rcl_interfaces
)

# Add executable for example
add_executable(mcap_example src/mcap_example.cpp)
target_link_libraries(mcap_example ros_message_converter_lib)
ament_target_dependencies(mcap_example
  rclcpp
  std_msgs
  rosbag2_cpp
  rosbag2_storage
  rcl_interfaces
  rosidl_typesupport_introspection_cpp
  deva_perception_msgs
  deva_control_msgs
  deva_common_msgs
  deva_localization_msgs
  deva_aeb_msgs
  deva_map_msgs
  deva_mdriver_msgs
  deva_gaode_routing_msgs
  deva_navi_msgs
  deva_ads_msgs
  deva_planning_msgs
  deva_planning_msgs2
  deva_function_msgs
  rviz_plug_msg
  fault_diagnosis
  serialize_msgs
  environment_model_msgs
  visualization_msgs
  geometry_msgs
  foxglove_msgs
  sensor_msgs
)

# Install executables
install(TARGETS
  mcap_streamer_node
  mcap_example
  s3_downloader_lib
  ros_message_converter_lib
  DESTINATION lib/${PROJECT_NAME}
)

# Install header files
install(DIRECTORY include/
  DESTINATION include
)

# Install config files
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()

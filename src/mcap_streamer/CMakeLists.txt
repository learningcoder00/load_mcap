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

# Add executable for reader
add_executable(mcap_reader_node src/mcap_reader_node.cpp)
ament_target_dependencies(mcap_reader_node
  rclcpp
  std_msgs
  rosbag2_cpp
  rosbag2_storage
  rcl_interfaces
  rosidl_typesupport_introspection_cpp
)

# Install executables
install(TARGETS
  mcap_streamer_node
  mcap_reader_node
  DESTINATION lib/${PROJECT_NAME}
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

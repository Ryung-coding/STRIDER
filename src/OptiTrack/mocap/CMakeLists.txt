cmake_minimum_required(VERSION 3.10)
project(mocap)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# set rpath for shared libraries
set(CMAKE_INSTALL_RPATH "$ORIGIN")

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)

find_package(mocap_interfaces REQUIRED)
find_package(mujoco_interfaces REQUIRED)
find_package(watchdog_interfaces REQUIRED)

# For Eigen3 and PCL
find_package(eigen3_cmake_module REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(PCL REQUIRED COMPONENTS common)

# Build external libraries
add_subdirectory(deps/librigidbodytracker EXCLUDE_FROM_ALL)
set(LIBMOTIONCAPTURE_BUILD_PYTHON_BINDINGS OFF)
set(LIBMOTIONCAPTURE_BUILD_EXAMPLE OFF)
set(LIBMOTIONCAPTURE_ENABLE_QUALISYS ON)
set(LIBMOTIONCAPTURE_ENABLE_OPTITRACK ON)
set(LIBMOTIONCAPTURE_ENABLE_OPTITRACK_CLOSED_SOURCE ON)
set(LIBMOTIONCAPTURE_ENABLE_VICON ON)
set(LIBMOTIONCAPTURE_ENABLE_VRPN ON)
set(LIBMOTIONCAPTURE_ENABLE_FZMOTION ON)
set(LIBMOTIONCAPTURE_ENABLE_NOKOV OFF)
set(LIBMOTIONCAPTURE_ENABLE_MOTIONANALYSIS OFF)
add_subdirectory(deps/libmotioncapture EXCLUDE_FROM_ALL)

# Include
include_directories(
  include
  deps/librigidbodytracker/include
  deps/libmotioncapture/include
  ${EIGEN3_INCLUDE_DIRS}
  ${PCL_INCLUDE_DIRS}
)

# Add executables
add_executable(mocap_worker src/mocap_worker.cpp)
add_executable(motion_capture_tracking_node src/motion_capture_tracking_node.cpp)

# Link dependencies
ament_target_dependencies(mocap_worker
  rclcpp rclcpp_components tf2_ros sensor_msgs
  std_msgs geometry_msgs
  mocap_interfaces mujoco_interfaces watchdog_interfaces
)

ament_target_dependencies(motion_capture_tracking_node
  rclcpp tf2_ros sensor_msgs
  std_msgs geometry_msgs
  mocap_interfaces
)

# External library linking
target_link_libraries(motion_capture_tracking_node
  librigidbodytracker
  libmotioncapture
)

# C++17 설정
target_compile_features(motion_capture_tracking_node PUBLIC cxx_std_17)
target_include_directories(motion_capture_tracking_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

# Install
install(TARGETS
  mocap_worker
  motion_capture_tracking_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  include/
  DESTINATION include/
)

install(DIRECTORY
  config
  launch
  DESTINATION share/${PROJECT_NAME}/
)

if ((CMAKE_SYSTEM_NAME STREQUAL "Linux") AND (CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64"))
  install(FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/deps/libmotioncapture/deps/NatNetSDKCrossplatform/lib/ubuntu/libNatNet.so
    DESTINATION lib/${PROJECT_NAME}
  )
endif()

ament_package()


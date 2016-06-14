cmake_minimum_required(VERSION 2.8.3)
project(laser_scan)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  sensor_msgs
  std_msgs
  )


catkin_package()
include_directories(
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(laser_scan src/laser_scan.cpp src/Scan2.cpp src/Scan2.h)
 target_link_libraries(laser_scan
   ${catkin_LIBRARIES}
   ${OpenCV_LIBRARIES}
 )



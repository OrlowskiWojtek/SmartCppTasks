cmake_minimum_required(VERSION 3.22)

project(VehicleTesting VERSION 1.0)

add_subdirectory(vehicle/)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(VehicleTesting Vehicles)

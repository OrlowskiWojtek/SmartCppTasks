cmake_minimum_required(VERSION 3.22)

project(Kompozyt)

add_executable(Kompozyt Core/main.cpp
                Core/src/PersonLeaf.cpp
                Core/src/WorkerInterface.cpp
                Core/src/DepartmentComposite.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Core")


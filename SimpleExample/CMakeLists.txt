cmake_minimum_required(VERSION 3.5) #设置CMake最小版本
project (wxj_cmake_hello_world_project) #设置工程名：生成了： PROJECT_NAME 这个变量。PROJECT_NAME是变量名，${PROJECT_NAME}是变量值，值为wxj_cmake_hello_world_project
add_executable(${PROJECT_NAME} main.cpp) #生成可执行文件：第一个参数是可执行文件名，第二个参数是要编译的源文件列表。
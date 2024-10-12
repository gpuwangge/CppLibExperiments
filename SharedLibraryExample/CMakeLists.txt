cmake_minimum_required(VERSION 3.5)
SET(CMAKE_C_COMPILER "C:/mingw64/bin/gcc.exe")
SET(CMAKE_CXX_COMPILER "C:/mingw64/bin/g++.exe")
project(hello_library)

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(hello_library SHARED 
    src/Hello.cpp
)
add_library(hello::library ALIAS hello_library)

target_include_directories(hello_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

# Method 1 to link library: this function will affect all targets. Must be put before add_executable()
link_libraries(hello_library)

# Add an executable with the above sources
add_executable(hello_binary
    src/main.cpp
)

# Method 2 to link library: this function (target version) will affect the target(hello_binary). Can be put after add_executable()
#target_link_libraries( hello_binary hello_library)

# Method 3 to link library: use alias hello::library and PRIVATE keyword here
# target_link_libraries( hello_binary
#    PRIVATE 
#        hello::library
# )



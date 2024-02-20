cmake_minimum_required(VERSION 3.5)
SET(CMAKE_C_COMPILER "C:/mingw64/bin/gcc.exe")
SET(CMAKE_CXX_COMPILER "C:/mingw64/bin/g++.exe")
project(model-library)

############################################################
# Create a library
############################################################

#Add source folder. dont need include directory because source files have set the path
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)

#Put output .dll to the build folder
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

#Generate the shared library from the library sources
add_library(${PROJECT_NAME} SHARED ${SRC})
#add_library(${PROJECT_NAME} STATIC ${SRC})
#add_library(hello::library ALIAS hello_library)
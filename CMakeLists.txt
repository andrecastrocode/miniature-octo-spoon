cmake_minimum_required(VERSION 3.16)

# Project
set(PROJECT_NAME miniature-octo-spoon)
project("${PROJECT_NAME}")

# Compiler
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wextra -Werror")

# Add sources
add_subdirectory(src)

# Add executable
add_executable("${PROJECT_NAME}" "${CMAKE_SOURCE_DIR}/src/main.cpp")
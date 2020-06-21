cmake_minimum_required(VERSION 3.12.4)

# Project
set(PROJECT_NAME miniature-octo-spoon)
project("${PROJECT_NAME}")

# Compiler
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wextra -Werror")

# Libraries
find_package(Boost REQUIRED)

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5 COMPONENTS Core REQUIRED)
# Omits qt5/QTCore prefix in includes
include_directories("${Qt5Core_INCLUDE_DIRS}")

# Add sources
add_subdirectory(src)
include_directories(src)

# Add executable
add_executable("${PROJECT_NAME}" "${CMAKE_SOURCE_DIR}/src/main.cpp")

qt5_use_modules("${PROJECT_NAME}" Core)

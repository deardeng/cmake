cmake_minimum_required(VERSION 3.7)
project(cmake4)

set(CMAKE_CXX_STANDARD 14)
find_package(A)
message(STATUS "A library ")
message(STATUS "            ${A_FOUND}")
message(STATUS "            ${A_INCLUDE_DIRS}")
message(STATUS "            ${A_LIBRARIES}")

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/Modules)
find_package(A REQUIRED)
message(STATUS "A library ")
message(STATUS "            ${A_FOUND}")
message(STATUS "            ${A_INCLUDE_DIRS}")
message(STATUS "            ${A_LIBRARIES}")


include(FindPkgConfig)
find_package(PkgConfig REQUIRED)
pkg_check_modules(PYTHON REQUIRED python2.7)
message(STATUS "PYTHON library ")
message(STATUS "            ${PYTHON_FOUND}")
message(STATUS "            ${PYTHON_INCLUDE_DIRS}")
message(STATUS "            ${PYTHON_LIBRARIES}")

include_directories()

add_executable(cmake4 main.cpp)
target_link_libraries(cmake4 ${ZLIB_LIBRARIES})
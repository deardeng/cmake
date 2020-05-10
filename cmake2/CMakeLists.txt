cmake_minimum_required(VERSION 3.0)
project(cmakevariable)

function(addLib name)
    message(STATUS "add library ${name} src files ${${name}_SRCS}")
    add_library(${name} SHARED ${${name}_SRCS})
endfunction()

function(printValues values)
    message(STATUS "${values}     ${${values}}")
    foreach (_item IN ITEMS ${${values}})
        message(STATUS "item value        ${_item}")
    endforeach ()

    list(LENGTH ${values} _l)
    message(STATUS "values size is ${_l}")

    list(APPEND ${values} a b c e f)

    list(LENGTH ${values} _l)
    message(STATUS "values size is ${_l}")

    list(FIND ${values} 11 _p)
    message(STATUS "fount 11 on ${_p}")
endfunction()

function(mathTest)
    set(n 11)
    math(EXPR value "100 * ${n}")
    message(STATUS "100 * ${n} ${value}")

    math(EXPR value "100 + ${n}")
    message(STATUS "100 + ${n} ${value}")
endfunction()

mathTest()

set(CMAKE_CXX_STANDARD 14)
include(function.cmake)
set(A 1)
message(STATUS "value1  ${A}")
set(A ${A} 11 12 12 23 2 3 $ENV{USER})
message(STATUS "value2  ${A}")

list(APPEND A 4)
message(STATUS "value3  ${A}")
printValues(A)

message(STATUS "CMAKE_CURRENT_SOURCE_DIR  ${CMAKE_CURRENT_SOURCE_DIR}")

listFiles(${CMAKE_CURRENT_SOURCE_DIR}/lib1 lib1_SRCS)
listFiles(${CMAKE_CURRENT_SOURCE_DIR}/lib2 lib2_SRCS)

addLib(lib1)
addLib(lib2)

add_executable(${PROJECT_NAME} main.cpp )
target_link_libraries(${PROJECT_NAME} lib1 lib2)
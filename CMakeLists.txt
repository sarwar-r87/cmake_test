cmake_minimum_required(VERSION 3.5.0)
project(main VERSION 0.1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/build.${CMAKE_SYSTEM_NAME}.${CMAKE_SYSTEM_PROCESSOR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/build.${CMAKE_SYSTEM_NAME}.${CMAKE_SYSTEM_PROCESSOR}/lib)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 11)

add_definitions(-DONTH)

find_package(Threads)


# execute_process()


include_directories(include)
include_directories(${CMAKE_HOME_DIRECTORY}/include)

add_subdirectory(${CMAKE_HOME_DIRECTORY}/src)



add_executable(main main.cpp)
target_link_libraries(main Threads::Threads)
target_link_libraries(main  Date)


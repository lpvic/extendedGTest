cmake_minimum_required(VERSION 3.5.0)
project(myGTest VERSION 0.0.2 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LOCAL_CPP_LIBS "$ENV{LOCAL_CPP_LIBS}")
set(LOCAL_CPP_PROJECTS "$ENV{LOCAL_CPP_PROJECTS}")
set(THIS_PROJECT "${LOCAL_CPP_PROJECTS}/myGTest")

include_directories(include)
add_subdirectory(tests)

add_library(myGTest STATIC ./src/myGTest.cpp)
set_target_properties(myGTest PROPERTIES 
    ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
    LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/bin/debug"
    ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/lib/release"
    LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/lib/release"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/bin/release"
)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_custom_command(TARGET myGTest POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory  ${THIS_PROJECT}/include/ ${LOCAL_CPP_LIBS}/myLibs/myGTest/include/)
    add_custom_command(TARGET myGTest POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory  ${CMAKE_BINARY_DIR}/output/lib/release/ ${LOCAL_CPP_LIBS}/myLibs/myGTest/lib/)
endif()
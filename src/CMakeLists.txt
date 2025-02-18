add_library(${CMAKE_PROJECT_NAME} STATIC modGTest.cpp) 
target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC "${THIS_PROJECT}/include")
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES 
    ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
    LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/bin/debug"
    ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/lib/release"
    LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/lib/release"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/bin/release"
)
target_link_libraries(${CMAKE_PROJECT_NAME} gtest_main)

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    add_custom_command(TARGET ${CMAKE_PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory  ${THIS_PROJECT}/include/ ${LOCAL_CPP_INCLUDES}/${CMAKE_PROJECT_NAME})
    add_custom_command(TARGET ${CMAKE_PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory  ${CMAKE_BINARY_DIR}/output/lib/release/ ${LOCAL_CPP_LIBS}/${CMAKE_PROJECT_NAME})
endif()

cmake_minimum_required(VERSION 3.5.0)
project(myGTest VERSION 0.0.1 LANGUAGES C CXX)

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    include_directories("${LOCAL_CPP_PROJECTS}/myGTest/include")
    add_library(lib_myGTest STATIC IMPORTED)
    set_target_properties(lib_myGTest PROPERTIES 
        IMPORTED_LOCATION "${LOCAL_CPP_PROJECTS}/myGTest/build/output/lib/debug/libmyGTest.a"
    )

    add_executable(tests tests.cpp)
    set_target_properties(tests PROPERTIES 
        ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
        LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
        RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/bin/debug"
    )
    target_link_libraries(tests lib_myGTest)
endif()

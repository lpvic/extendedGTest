if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    
    add_library(lib_${CMAKE_PROJECT_NAME} STATIC IMPORTED)
    set_target_properties(lib_${CMAKE_PROJECT_NAME} PROPERTIES 
        IMPORTED_LOCATION "${THIS_PROJECT}/build/output/lib/debug/lib${CMAKE_PROJECT_NAME}.a"
    )

    add_executable(tests tests.cpp)
    set_target_properties(tests PROPERTIES 
        ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
        LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
        RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/bin/debug"
    )
    target_link_libraries(tests lib_${CMAKE_PROJECT_NAME})
endif()

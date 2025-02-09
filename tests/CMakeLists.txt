cmake_minimum_required(VERSION 3.5.0)
project(myGTest VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories("C:/Users/luisp/Programacion/VS Code/C++/myGTest/include")
add_library(lib_myGTest STATIC IMPORTED)
set_target_properties(lib_myGTest PROPERTIES 
    IMPORTED_LOCATION "C:/Users/luisp/Programacion/VS Code/C++/myGTest/build/output/lib/debug/libmyGTest.a"
)

add_executable(tests tests.cpp)
set_target_properties(tests PROPERTIES 
    ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
    LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/lib/debug"
    RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/output/bin/debug"
    ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/lib/release"
    LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/lib/release"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/output/bin/release"
)
target_link_libraries(tests lib_myGTest)
